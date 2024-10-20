#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include <llvm/IR/IRBuilder.h>
#include <vector>
#include <sstream>


struct RuntimePass : public llvm::PassInfoMixin<RuntimePass> {
    bool isLogger(llvm::StringRef name) { return name == "log_instr"; }

    llvm::PreservedAnalyses run(llvm::Function &F, llvm::FunctionAnalysisManager &FAM) {

        if (isLogger(F.getName())) {
            return llvm::PreservedAnalyses::none();
        }

        llvm::LLVMContext &Ctx = F.getContext();
        llvm::IRBuilder<> builder(Ctx);

        llvm::Type *return_type = llvm::Type::getVoidTy(Ctx);
        llvm::ArrayRef<llvm::Type *> param_types = {builder.getInt8Ty()->getPointerTo()};
        llvm::FunctionType *function_type = llvm::FunctionType::get(return_type, param_types, false);
        llvm::FunctionCallee log_func_signature = F.getParent()->getOrInsertFunction("log_instr", function_type);

        for (auto &B : F) {
            for (auto &I : B) {
                std::stringstream ss;
                ss << I.getOpcodeName() << ",";

                if (llvm::isa<llvm::PHINode>(&I)) {
                    continue;
                }

                builder.SetInsertPoint(&I);

                for (auto &user : I.uses()) {
                    auto &&inst = llvm::cast<llvm::Instruction>(user.getUser());

                    if (llvm::isa<llvm::PHINode>(*inst)) {
                        continue;
                    }

                    ss << inst->getOpcodeName() << ":";
                }

                ss << "\n";
                llvm::Value *log_data = builder.CreateGlobalStringPtr(ss.str());
                llvm::Value *args[] = {log_data};
                builder.CreateCall(log_func_signature, args);
            }
        }

        return llvm::PreservedAnalyses::none();
    };
  static bool isRequired() { return true; }
};

llvm::PassPluginLibraryInfo getPassPluginInfo() {
  const auto callback = [](llvm::PassBuilder &PB) {
    PB.registerOptimizerLastEPCallback([&](llvm::ModulePassManager &MPM, auto) {
      MPM.addPass(llvm::createModuleToFunctionPassAdaptor(RuntimePass{}));
      return true;
    });
  };

  return {LLVM_PLUGIN_API_VERSION, "MyPlugin", "0.0.1", callback};
};

extern "C" LLVM_ATTRIBUTE_WEAK llvm::PassPluginLibraryInfo
llvmGetPassPluginInfo() {
  return getPassPluginInfo();
}
