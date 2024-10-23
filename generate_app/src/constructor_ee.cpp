#include "llvm/IR/PassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Value.h"

#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/GenericValue.h"
#include "llvm/Support/TargetSelect.h"
#include "app_generator.h"
#include "sim.h"
using namespace llvm;

int main() {
    LLVMContext Ctx;
    Module *M = new Module("app_ee_generated.c", Ctx);
    IRBuilder<> Builder(Ctx);


    ArrayRef<Type *> SimPutPixelParamTypes = {Type::getInt32Ty(Ctx),
                                                Type::getInt32Ty(Ctx),
                                                Type::getInt32Ty(Ctx)};

    auto *SimPutPixelType = FunctionType::get(Type::getVoidTy(Ctx), SimPutPixelParamTypes, false);
    auto SimPutPixelFunc = M->getOrInsertFunction("simPutPixel", SimPutPixelType);

    auto *SimFlushType = FunctionType::get(Type::getVoidTy(Ctx), false);
    auto SimFlushFunc = M->getOrInsertFunction("simFlush", SimFlushType);

    auto *SimRandType = FunctionType::get(Type::getInt32Ty(Ctx), {Type::getInt32Ty(Ctx), Type::getInt32Ty(Ctx)}, false);
    auto SimRandFunc = M->getOrInsertFunction("simRand", SimRandType);

    auto *SimExitType = FunctionType::get(Type::getInt32Ty(Ctx), false);
    auto SimExitFunc = M->getOrInsertFunction("simExit", SimExitType);

    GenerateUpdateMatrix(M);
    GenerateDrawMatrix(M);
    GenerateInitMatrix(M);
    GenerateApp(M);

    auto AppFunc = M->getFunction("app");
    if (AppFunc == nullptr) {
        outs() << "[FATAL_ERROR]: Can't find 'app' function in module!\n";
        return 1;
    }

    // M->print(outs(), nullptr);

    InitializeNativeTarget();
    InitializeNativeTargetAsmPrinter();

    ExecutionEngine *ee = EngineBuilder(std::unique_ptr<Module>(M)).create();
    ee->InstallLazyFunctionCreator([&](const std::string &FuncName) -> void * {
        if (FuncName == "simPutPixel") {
            return reinterpret_cast<void *>(simPutPixel);
        }
        if (FuncName == "simFlush") {
            return reinterpret_cast<void *>(simFlush);
        }
        return nullptr;
    });
    ee->finalizeObject();

    simInit();
    ArrayRef<GenericValue> noargs;
    GenericValue v = ee->runFunction(AppFunc, noargs);
    // outs() << "[EE] Result: " << v.IntVal << "\n";
    simExit();
    return 0;
}