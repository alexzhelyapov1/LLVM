# cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -GNinja ../

cmake_minimum_required (VERSION 3.16)
project(SimpleGraphApp)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(MY_COMPILE_FLAGS "")
set(CMAKE_C_FLAGS    "${CMAKE_C_FLAGS} ${MY_COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${MY_COMPILE_FLAGS}")


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

set(IR_OUTPUT_DIR "${CMAKE_BINARY_DIR}/ir")
make_directory(${IR_OUTPUT_DIR})


set(GRAPH_APP_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/simple_graph_app)
set(LLVM_PASS_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/llvm_pass)


find_package(SDL2 REQUIRED CONFIG REQUIRED COMPONENTS SDL2)
find_package(LLVM REQUIRED CONFIG)


add_subdirectory(simple_graph_app)
add_subdirectory(llvm_pass)
add_subdirectory(generate_app)


add_custom_target(clang-force-format
    COMMAND find "${GRAPH_APP_SOURCE_DIR}" "${LLVM_PASS_SOURCE_DIR}"
        -name "*.cpp" -exec clang-format -style='{ColumnLimit: 120}' -i {} +
)
