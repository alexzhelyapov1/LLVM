# cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -GNinja ../

cmake_minimum_required (VERSION 3.16)
project(TestLLVMPass)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(MY_COMPILE_FLAGS "")
set(CMAKE_C_FLAGS    "${CMAKE_C_FLAGS} ${MY_COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${MY_COMPILE_FLAGS}")


find_package(LLVM REQUIRED CONFIG)


add_library(llvm_pass SHARED src/Pass4_uses.cpp)
target_include_directories(llvm_pass PUBLIC "${LLVM_INCLUDE_DIRS}")


add_custom_target(run_pass
    COMMAND clang -fpass-plugin=${CMAKE_CURRENT_BINARY_DIR}/libllvm_pass.so ${CMAKE_CURRENT_SOURCE_DIR}/c_examples/hello.c
    DEPENDS llvm_pass
    SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/c_examples/hello.c
)


# Why this does not work? It skips dependency!
add_executable(run_pass_old c_examples/hello.c)
add_dependencies(run_pass_old llvm_pass)
target_compile_options(run_pass_old PUBLIC "-fpass-plugin=${CMAKE_CURRENT_BINARY_DIR}/libllvm_pass.so")
