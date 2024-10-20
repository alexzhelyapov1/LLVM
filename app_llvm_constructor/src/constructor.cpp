#include "llvm/IR/PassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"
#include <llvm-14/llvm/IR/DerivedTypes.h>
#include <llvm-14/llvm/IR/IRBuilder.h>
#include <llvm-14/llvm/IR/Module.h>
// #include <llvm/IR/IRBuilder.h>

using namespace llvm;

#define SIM_X_SIZE 512
#define SIM_Y_SIZE 256

struct MyModPass : public PassInfoMixin<MyModPass> {
  PreservedAnalyses run(Module &M, ModuleAnalysisManager &AM) {

    outs() << "[Module] " << M.getName() << "\n";

    llvm::LLVMContext &Ctx = M.getContext(); // Используем контекст модуля
    llvm::IRBuilder<> Builder(Ctx);

    llvm::ArrayType *MatrixTy = llvm::ArrayType::get(Builder.getInt32Ty(), SIM_X_SIZE * SIM_Y_SIZE);
    llvm::PointerType *MatrixPtrTy = llvm::PointerType::getUnqual(MatrixTy);

    llvm::FunctionType *FT = llvm::FunctionType::get(Builder.getVoidTy(), {MatrixPtrTy}, false);
    llvm::Function *UpdateMatrixFunc = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, "UpdateMatrix", M);

    llvm::BasicBlock *EntryBB = llvm::BasicBlock::Create(Ctx, "entry", UpdateMatrixFunc);
    llvm::BasicBlock *OuterLoopHeaderBB = llvm::BasicBlock::Create(Ctx, "outer_loop_header", UpdateMatrixFunc);
    llvm::BasicBlock *OuterLoopBodyBB = llvm::BasicBlock::Create(Ctx, "outer_loop_body", UpdateMatrixFunc);
    llvm::BasicBlock *InnerLoopHeaderBB = llvm::BasicBlock::Create(Ctx, "inner_loop_header", UpdateMatrixFunc);
    llvm::BasicBlock *InnerLoopBodyBB = llvm::BasicBlock::Create(Ctx, "inner_loop_body", UpdateMatrixFunc);
    llvm::BasicBlock *InnerLoopEndBB = llvm::BasicBlock::Create(Ctx, "inner_loop_end", UpdateMatrixFunc);
    llvm::BasicBlock *OuterLoopEndBB = llvm::BasicBlock::Create(Ctx, "outer_loop_end", UpdateMatrixFunc);

    Builder.SetInsertPoint(EntryBB);
    llvm::Value *MatrixPtr = UpdateMatrixFunc->getArg(0);
    Builder.CreateBr(OuterLoopHeaderBB);

    Builder.SetInsertPoint(OuterLoopHeaderBB);
    llvm::PHINode *Y = Builder.CreatePHI(Builder.getInt32Ty(), 2, "y");
    Y->addIncoming(Builder.getInt32(0), EntryBB);
    llvm::Value *OuterLoopCond = Builder.CreateICmpSLT(Y, Builder.getInt32(SIM_Y_SIZE - 1), "outer_loop_cond");
    Builder.CreateCondBr(OuterLoopCond, OuterLoopBodyBB, OuterLoopEndBB);


     Builder.SetInsertPoint(OuterLoopBodyBB);
  Builder.CreateBr(InnerLoopHeaderBB);



  // Inner loop header
  Builder.SetInsertPoint(InnerLoopHeaderBB);
  llvm::PHINode *X = Builder.CreatePHI(Builder.getInt32Ty(), 2, "x");
  X->addIncoming(Builder.getInt32(SIM_X_SIZE - 1), OuterLoopBodyBB);
  llvm::Value *InnerLoopCond = Builder.CreateICmpSGT(X, Builder.getInt32(0), "inner_loop_cond");
  Builder.CreateCondBr(InnerLoopCond, InnerLoopBodyBB, InnerLoopEndBB);

  // Inner loop body
  Builder.SetInsertPoint(InnerLoopBodyBB);
    // matrix[x + y * SIM_X_SIZE] = ...
    llvm::Value *Index = Builder.CreateAdd(X, Builder.CreateMul(Y, Builder.getInt32(SIM_X_SIZE)), "index");
    llvm::Value *MatrixElementPtr = Builder.CreateGEP(MatrixTy, MatrixPtr, {Builder.getInt32(0), Index});

    llvm::Value *Val1 = Builder.CreateLoad(Builder.getInt32Ty(), Builder.CreateGEP(MatrixTy, MatrixPtr, {Builder.getInt32(0), Builder.CreateAdd(Builder.CreateSub(X, Builder.getInt32(1)), Builder.CreateMul(Y, Builder.getInt32(SIM_X_SIZE)))}));
    llvm::Value *Val2 = Builder.CreateLoad(Builder.getInt32Ty(), Builder.CreateGEP(MatrixTy, MatrixPtr, {Builder.getInt32(0), Index}));
    llvm::Value *Val3 = Builder.CreateLoad(Builder.getInt32Ty(), Builder.CreateGEP(MatrixTy, MatrixPtr, {Builder.getInt32(0), Builder.CreateAdd(X, Builder.CreateMul(Builder.CreateAdd(Y, Builder.getInt32(1)), Builder.getInt32(SIM_X_SIZE)))}));
    llvm::Value *Val4 = Builder.CreateLoad(Builder.getInt32Ty(), Builder.CreateGEP(MatrixTy, MatrixPtr, {Builder.getInt32(0), Builder.CreateAdd(Builder.CreateSub(X, Builder.getInt32(1)), Builder.CreateMul(Builder.CreateAdd(Y, Builder.getInt32(1)), Builder.getInt32(SIM_X_SIZE)))}));


    llvm::Value *Sum = Builder.CreateAdd(Builder.CreateSDiv(Val1, Builder.getInt32(4)), Builder.CreateSDiv(Val2, Builder.getInt32(4)));
    Sum = Builder.CreateAdd(Sum, Builder.CreateSDiv(Val3, Builder.getInt32(4)));
    Sum = Builder.CreateAdd(Sum, Builder.CreateSDiv(Val4, Builder.getInt32(4)));



    Builder.CreateStore(Sum, MatrixElementPtr);



  X->addIncoming(Builder.CreateSub(X, Builder.getInt32(1)), InnerLoopBodyBB);
  Builder.CreateBr(InnerLoopHeaderBB);



  // Inner loop end
  Builder.SetInsertPoint(InnerLoopEndBB);
  Builder.CreateBr(OuterLoopEndBB);




  // Outer loop end
  Builder.SetInsertPoint(OuterLoopEndBB);
    Y->addIncoming(Builder.CreateAdd(Y, Builder.getInt32(1)), InnerLoopEndBB);
    Builder.CreateBr(OuterLoopHeaderBB);

    // Function end
  Builder.SetInsertPoint(OuterLoopEndBB);
  Builder.CreateRetVoid();

    // llvm::Type *return_type = llvm::Type::getVoidTy(Ctx);
    // llvm::ArrayRef<llvm::Type *> param_types = {llvm::Type::getInt8PtrTy(Ctx)}; //  Используем Type::getInt8PtrTy
    // llvm::FunctionType *function_type = llvm::FunctionType::get(return_type, param_types, false);
    // llvm::FunctionCallee log_func_signature = M.getOrInsertFunction("log_instr", function_type); // Используем модуль M


    for (auto &F : M) {
        outs() << "[Function] " << F.getName() << " (arg_size: " << F.arg_size() << ")\n";
    }

    return PreservedAnalyses::all();
  };
};

PassPluginLibraryInfo getPassPluginInfo() {
  const auto callback = [](PassBuilder &PB) {
    PB.registerOptimizerLastEPCallback([&](ModulePassManager &MPM, auto) {
      MPM.addPass(MyModPass{});
      return true;
    });
  };

  return {LLVM_PLUGIN_API_VERSION, "MyPlugin", "0.0.1", callback};
};

/* When a plugin is loaded by the driver, it will call this entry point to
obtain information about this plugin and about how to register its passes.
*/
extern "C" LLVM_ATTRIBUTE_WEAK PassPluginLibraryInfo llvmGetPassPluginInfo() { return getPassPluginInfo(); }
