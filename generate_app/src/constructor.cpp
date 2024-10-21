#include "llvm/IR/PassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Function.h"
#include <llvm-14/llvm/IR/DerivedTypes.h>
#include <llvm-14/llvm/IR/IRBuilder.h>
#include <llvm-14/llvm/IR/Module.h>
#include <llvm-14/llvm/IR/Value.h>
#include <llvm-14/llvm/Support/raw_ostream.h>

using namespace llvm;

#define SIM_X_SIZE 512
#define SIM_Y_SIZE 256


void GenerateUpdateMatrix(Module &M) {
    llvm::LLVMContext &Ctx = M.getContext();
    llvm::IRBuilder<> Builder(Ctx);

    llvm::FunctionType *FT = llvm::FunctionType::get(Builder.getVoidTy(), {Builder.getInt32Ty()->getPointerTo()}, false);
    llvm::Function *UpdateMatrixFunc = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, "updateMatrix1", M);
    UpdateMatrixFunc->setDSOLocal(true);
    UpdateMatrixFunc->setUnnamedAddr(llvm::GlobalValue::UnnamedAddr::Local);

    llvm::BasicBlock *EntryBB = llvm::BasicBlock::Create(Ctx, "entry", UpdateMatrixFunc);
    llvm::BasicBlock *BB2 = llvm::BasicBlock::Create(Ctx, "2", UpdateMatrixFunc);
    llvm::BasicBlock *BB6 = llvm::BasicBlock::Create(Ctx, "6", UpdateMatrixFunc);
    llvm::BasicBlock *BB7 = llvm::BasicBlock::Create(Ctx, "7", UpdateMatrixFunc);
    llvm::BasicBlock *BB10 = llvm::BasicBlock::Create(Ctx, "10", UpdateMatrixFunc);

    Builder.SetInsertPoint(EntryBB);
    llvm::Value *N0 = UpdateMatrixFunc->getArg(0);
    Builder.CreateBr(BB2);

    Builder.SetInsertPoint(BB2);
    llvm::PHINode *N3 = Builder.CreatePHI(Builder.getInt64Ty(), 2, "phi");
    N3->addIncoming(Builder.getInt64(0), EntryBB);
    llvm::Value *N4 = Builder.CreateShl(N3, Builder.getInt64(9), "shl", false, true);
    llvm::Value *N5 = Builder.CreateAdd(N4, Builder.getInt64(512), "add", true, true);
    Builder.CreateBr(BB10);

    Builder.SetInsertPoint(BB6);
    Builder.CreateRetVoid();

    Builder.SetInsertPoint(BB7);
    llvm::Value *N8 = Builder.CreateAdd(N3, Builder.getInt64(1), "add", true, true);
    N3->addIncoming(N8, BB7);
    llvm::Value *N9 = Builder.CreateICmpEQ(N8, Builder.getInt64(255), "cmp");
    Builder.CreateCondBr(N9, BB6, BB2);

    Builder.SetInsertPoint(BB10);
    llvm::PHINode *N11 = Builder.CreatePHI(Builder.getInt64Ty(), 2, "phi11");
    N11->addIncoming(Builder.getInt64(511), BB2);
    llvm::Value *N12 = Builder.CreateAdd(N11, Builder.getInt64(-1), "add12", false, true);
    N11->addIncoming(N12, BB10);
    llvm::Value *N13 = Builder.CreateAdd(N12, N4, "add13", true, true);
    llvm::Value *N14 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N13, "gep14");
    llvm::LoadInst *N15 = Builder.CreateAlignedLoad(Builder.getInt32Ty(), N14, llvm::MaybeAlign(4), "load15");
    llvm::Value *N16 = Builder.CreateLShr(N15, Builder.getInt32(2), "lshr16");
    llvm::Value *N17 = Builder.CreateAdd(N11, N4, "add17", true, true);
    llvm::Value *N18 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N17, "gep18");
    llvm::LoadInst *N19 = Builder.CreateAlignedLoad(Builder.getInt32Ty(), N18, llvm::MaybeAlign(4), "load19");
    llvm::Value *N20 = Builder.CreateLShr(N19, Builder.getInt32(2), "lshr20");
    llvm::Value *N21 = Builder.CreateAdd(N20, N16, "add21", true, true);
    llvm::Value *N22 = Builder.CreateAdd(N11, N5, "add22", true, true);
    llvm::Value *N23 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N22, "gep23");
    llvm::LoadInst *N24 = Builder.CreateAlignedLoad(Builder.getInt32Ty(), N23, llvm::MaybeAlign(4), "load24");
    llvm::Value *N25 = Builder.CreateLShr(N24, Builder.getInt32(2), "lshr25");
    llvm::Value *N26 = Builder.CreateAdd(N21, N25, "add26", true, false);
    llvm::Value *N27 = Builder.CreateAdd(N12, N5, "add27", true, true);
    llvm::Value *N28 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N27, "gep28");
    llvm::LoadInst *N29 = Builder.CreateAlignedLoad(Builder.getInt32Ty(), N28, llvm::MaybeAlign(4), "load29");
    llvm::Value *N30 = Builder.CreateLShr(N29, Builder.getInt32(2), "lshr30");
    llvm::Value *N31 = Builder.CreateAdd(N26, N30, "add31", true, false);
    llvm::StoreInst *StoreInst = Builder.CreateAlignedStore(N31, N18, llvm::MaybeAlign(4));
    llvm::Value *N32 = Builder.CreateICmpUGT(N11, Builder.getInt64(1), "icmp32");
    Builder.CreateCondBr(N32, BB10, BB7);

    for (auto &F : M) {
        for (auto &B : F) {
            std::vector<llvm::Instruction*> ToErase;
            for (auto &I : B) {
                if (auto *Call = llvm::dyn_cast<llvm::CallInst>(&I)) {
                    llvm::Function *CalledFunction = Call->getCalledFunction();
                    if (CalledFunction && CalledFunction->getName() == "updateMatrix") {
                        ToErase.push_back(Call);

                        std::vector<llvm::Value *> Args;
                        for (llvm::Use &Use : Call->args()) {
                            Args.push_back(Use.get());
                        }

                        Builder.SetInsertPoint(Call);
                        Builder.CreateCall(UpdateMatrixFunc, Args);
                    }
                }
            }
            for (auto *Inst : ToErase) {
                Inst->eraseFromParent();
            }
        }
    }
}


struct MyModPass : public PassInfoMixin<MyModPass> {
  PreservedAnalyses run(Module &M, ModuleAnalysisManager &AM) {

    outs() << "[Module] " << M.getName() << "\n";

    GenerateUpdateMatrix(M);


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
