# cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -GNinja ../
# ninja app_with_runtime_stat_pass
# cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_VERBOSE_MAKEFILE:BOOL=ON --trace ../
# make VERBOSE=1 app_with_runtime_stat_pass
# make VERBOSE=1 graph_with_ee

cmake_minimum_required(VERSION 3.22)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")
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
find_package(antlr4-runtime CONFIG REQUIRED)


add_custom_target(compile_passes)
add_custom_target(dump_irs)
add_custom_target(compile_graph_apps)


add_subdirectory(simple_graph_app)
add_subdirectory(llvm_pass)
add_subdirectory(generate_app)
add_subdirectory(frontend)


add_custom_target(clang-force-format
    COMMAND find "${GRAPH_APP_SOURCE_DIR}" "${LLVM_PASS_SOURCE_DIR}"
        -name "*.cpp" -exec clang-format -style='{ColumnLimit: 120}' -i {} +
)
