# cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -GNinja ../

cmake_minimum_required (VERSION 3.16)
project(SimpleGraphApp)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(MY_COMPILE_FLAGS "")
set(CMAKE_C_FLAGS    "${CMAKE_C_FLAGS} ${MY_COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${MY_COMPILE_FLAGS}")


find_package(SDL2 REQUIRED CONFIG REQUIRED COMPONENTS SDL2)


set(SIM_APP_SOURCES
    src/app.c
    src/sim.c
    src/start.c
)


include_directories("include")


add_executable(simple_graph_app ${SIM_APP_SOURCES})
target_include_directories(simple_graph_app PUBLIC "${SDL2_INCLUDE_DIR}")
target_link_libraries(simple_graph_app SDL2::SDL2)


add_custom_target(llvm_ir
    COMMAND clang ${CMAKE_CURRENT_SOURCE_DIR}/src/app.c -emit-llvm -S -O2 -I${CMAKE_CURRENT_SOURCE_DIR}/include -o app.ll
    COMMAND ${CMAKE_COMMAND} -E copy app.ll ${CMAKE_CURRENT_SOURCE_DIR}/artefacts
    SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/app.c
)

