# cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -GNinja ../

cmake_minimum_required (VERSION 3.16)
project(AppLLVMConstructor)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(MY_COMPILE_FLAGS "")
set(CMAKE_C_FLAGS    "${CMAKE_C_FLAGS} ${MY_COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${MY_COMPILE_FLAGS}")


find_package(LLVM REQUIRED CONFIG)


add_library(constructor_pass_compile SHARED src/constructor.cpp)
target_include_directories(constructor_pass_compile PUBLIC "${LLVM_INCLUDE_DIRS}")


# add_custom_target(check_ir
#     COMMAND clang ${CMAKE_CURRENT_SOURCE_DIR}/src/app.c -emit-llvm -S -O2 -I${CMAKE_CURRENT_SOURCE_DIR}/include -o app.ll
#     COMMAND ${CMAKE_COMMAND} -E copy app.ll ${CMAKE_CURRENT_SOURCE_DIR}/artefacts
#     SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/app.c
# )


add_custom_target(check_ir
    COMMAND clang -fpass-plugin=$<TARGET_FILE:constructor_pass_compile> -emit-llvm -S -O0
        ${CMAKE_CURRENT_SOURCE_DIR}/src/empty.c
        -I${GRAPH_APP_SOURCE_DIR}/include -o app.ll
    COMMAND ${CMAKE_COMMAND} -E copy app.ll ${CMAKE_CURRENT_SOURCE_DIR}/artefacts
    DEPENDS constructor_pass_compile
)
