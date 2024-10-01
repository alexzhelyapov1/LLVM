# cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -GNinja ../

cmake_minimum_required (VERSION 3.16)
project(TestLLVMPass)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(MY_COMPILE_FLAGS "")
set(CMAKE_C_FLAGS    "${CMAKE_C_FLAGS} ${MY_COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${MY_COMPILE_FLAGS}")


find_package(LLVM REQUIRED CONFIG)

add_library(llvm_pass SHARED src/Pass4_uses.cpp)
target_include_directories(llvm_pass PUBLIC "/usr/lib/llvm-18/include")
target_compile_options(llvm_pass PUBLIC "-fPIC" "-I`llvm-config --includedir`")
# target_link_libraries(llvm_pass PRIVATE LLVMSupport LLVMIRReader LLVMTransformUtils) /usr/lib/llvm-18/include


add_custom_target(llvm_pass_cmd
    COMMAND clang++ ${CMAKE_CURRENT_SOURCE_DIR}/src/Pass4_uses.cpp "-fPIC" "-shared" "-I`llvm-config --includedir`" "-o" "libPass.so"
)

# working: clang++ Pass4_uses.cpp -fPIC -shared -I$(llvm-config --includedir) -o libPass.so


# add_custom_target(llvm_pass
#     COMMAND clang++ ${CMAKE_CURRENT_SOURCE_DIR}/src/Pass_start.cpp -fPIC -shared -I`llvm-config --includedir` -o libPass.so
# )

# add_custom_target(llvm_ir
#     COMMAND clang ${CMAKE_CURRENT_SOURCE_DIR}/src/app.c -emit-llvm -S -O2 -I${CMAKE_CURRENT_SOURCE_DIR}/include -o app.ll
#     SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/app.c
# )


