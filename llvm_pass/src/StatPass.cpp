#include "llvm/IR/PassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"
#include <fstream>
using namespace llvm;

struct MyModPass : public PassInfoMixin<MyModPass> {
  PreservedAnalyses run(Module &M, ModuleAnalysisManager &AM) {

    std::ofstream stat("stat.csv");
    stat << "Opcode,Users\n";
    outs() << "[Module] " << M.getName() << "\n";

    for (auto &F : M) {
        outs() << "[Function] " << F.getName() << " (arg_size: " << F.arg_size()
                << ")\n";

        for (auto &B : F) {

            for (auto &I : B) {
                std::string opcode = I.getOpcodeName();
                if (opcode == "phi") {
                  continue;
                }
                stat << opcode << ",";

                for (auto& U : I.uses()) {
                    User* user = U.getUser();
                    Instruction* inst = cast<Instruction>(user);
                    unsigned opcode = inst->getOpcode();
                    std::string opcodeName = inst->getOpcodeName(opcode);
                    if (opcodeName != "phi") {
                      stat << opcodeName << ":";
                    }
                }

                stat << "\n";
            }
        }
    }

    stat.close();

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
extern "C" LLVM_ATTRIBUTE_WEAK PassPluginLibraryInfo llvmGetPassPluginInfo() {
  return getPassPluginInfo();
}
