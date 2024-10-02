# cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -GNinja ../

cmake_minimum_required (VERSION 3.16)
project(TestLLVMPass)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(MY_COMPILE_FLAGS "")
set(CMAKE_C_FLAGS    "${CMAKE_C_FLAGS} ${MY_COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${MY_COMPILE_FLAGS}")


find_package(LLVM REQUIRED CONFIG)


# Working example


add_library(pass_example_compile SHARED pass_example/PassExample.cpp)
target_include_directories(pass_example_compile PUBLIC "${LLVM_INCLUDE_DIRS}")


add_custom_target(pass_example_run
    COMMAND clang -fpass-plugin=$<TARGET_FILE:pass_example_compile> ${CMAKE_CURRENT_SOURCE_DIR}/pass_example/hello.c
    DEPENDS pass_example_compile
    SOURCES pass_example/hello.c
)


# Why this does not work? It skips dependency!
add_executable(pass_example_run_old pass_example/hello.c)
add_dependencies(pass_example_run_old pass_example_compile)
target_compile_options(pass_example_run_old PUBLIC "-fpass-plugin=$<TARGET_FILE:pass_example_compile>")
