cmake_minimum_required (VERSION 3.16)
project(SimpleGraphApp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(MY_COMPILE_FLAGS "")
set(CMAKE_C_FLAGS    "${CMAKE_C_FLAGS} ${MY_COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${MY_COMPILE_FLAGS}")

set(SIM_APP_SOURCES
    src/app.c
    src/sim.c
    src/start.c
)

add_executable(simple_graph_app ${SIM_APP_SOURCES})
target_include_directories(simple_graph_app PUBLIC "include")
target_link_libraries(simple_graph_app SDL2)

add_executable(test src/test.c)
target_link_libraries(test SDL2)
