cd $(dirname "$0")

# cd llvm-project && cmake -GNinja -S llvm -B build -DLLVM_ENABLE_PROJECTS="clang" -DLLVM_USE_LINKER=lld -DCMAKE_INSTALL_PREFIX=../install/ -DCMAKE_BUILD_TYPE=Release -DLLVM_ENABLE_ASSERTIONS=On -DLLVM_INCLUDE_TESTS=OFF -DLLVM_INCLUDE_EXAMPLES=OFF -DLLVM_TARGETS_TO_BUILD=x86

# cd llvm-project && cmake -GNinja -S llvm -B build -DLLVM_ENABLE_PROJECTS="clang" -DLLVM_USE_LINKER=lld -DCMAKE_INSTALL_PREFIX=../install/ -DCMAKE_BUILD_TYPE=Release -DLLVM_ENABLE_ASSERTIONS=On -DLLVM_INCLUDE_TESTS=OFF -DLLVM_INCLUDE_EXAMPLES=OFF -DLLVM_TARGETS_TO_BUILD=LexArch

llvm-project/build/bin/llc very_simple.ll -march lexArch
llvm-project/build/bin/llc --version &> llc_vesrion.txt