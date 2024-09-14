cmake_minimum_required (VERSION 3.16)
project(SimpleGraphApp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(SDL2 REQUIRED CONFIG REQUIRED COMPONENTS SDL2)
message("SDL2_INCLUDE_DIR: ${SDL2_INCLUDE_DIR}")

set(MY_COMPILE_FLAGS "")
set(CMAKE_C_FLAGS    "${CMAKE_C_FLAGS} ${MY_COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${MY_COMPILE_FLAGS}")

set(SIM_APP_SOURCES
    src/app.c
    src/sim.c
    src/start.c
)

# target_include_directories(simple_graph_app PUBLIC "include" "/usr/local/Cellar/sdl2/2.30.7/include")
add_executable(simple_graph_app ${SIM_APP_SOURCES})
target_include_directories(simple_graph_app PUBLIC "include" "${SDL2_INCLUDE_DIR}")
target_link_libraries(simple_graph_app SDL2::SDL2)

