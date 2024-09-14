cmake_minimum_required (VERSION 3.16)
project (Simple graph app)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set(MY_COMPILE_FLAGS "-lSDL2")
set(CMAKE_C_FLAGS    "${CMAKE_C_FLAGS} ${MY_COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${MY_COMPILE_FLAGS}")

set(SIM_APP_SOURCES
    src/app.c
    src/sim.c
    src/start.c
)

# add_executable(simple_graph_app ${SIM_APP_SOURCES})
# target_include_directories(include)

add_executable(test src/main.c)