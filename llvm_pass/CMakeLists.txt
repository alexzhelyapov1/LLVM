# cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -GNinja ../

cmake_minimum_required (VERSION 3.16)
project(TestLLVMPass)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(MY_COMPILE_FLAGS "")
set(CMAKE_C_FLAGS    "${CMAKE_C_FLAGS} ${MY_COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${MY_COMPILE_FLAGS}")


find_package(LLVM REQUIRED CONFIG)


add_library(stat_pass_compile SHARED src/StatPass.cpp)
target_include_directories(stat_pass_compile PUBLIC "${LLVM_INCLUDE_DIRS}")


add_custom_target(stat_pass_run
    COMMAND clang -fpass-plugin=$<TARGET_FILE:stat_pass_compile> -I${GRAPH_APP_SOURCE_DIR}/include 
        -S -emit-llvm -O2 ${GRAPH_APP_SOURCE_DIR}/src/app.c -o app.ll
    COMMAND ${CMAKE_COMMAND} -E copy stat.csv ${CMAKE_CURRENT_SOURCE_DIR}/artefacts
    DEPENDS stat_pass_compile
    SOURCES ${GRAPH_APP_SOURCE_DIR}/src/app.c
)


add_library(runtime_pass_compile SHARED src/RuntimePass.cpp)
target_include_directories(runtime_pass_compile PUBLIC "${LLVM_INCLUDE_DIRS}")


find_package(SDL2 REQUIRED CONFIG REQUIRED COMPONENTS SDL2)

set(MODIFIED_APP_SOURCES
    ${GRAPH_APP_SOURCE_DIR}/src/sim.c
    ${GRAPH_APP_SOURCE_DIR}/src/start.c
    src/log.c
)

add_library(graph_without_app OBJECT ${MODIFIED_APP_SOURCES})
target_include_directories(graph_without_app PUBLIC "${GRAPH_APP_SOURCE_DIR}/include")
target_link_libraries(graph_without_app SDL2::SDL2)


set(RUNTIME_PASS_PLUGIN $<TARGET_FILE:runtime_pass_compile>) 
add_library(modified_app OBJECT ${GRAPH_APP_SOURCE_DIR}/src/app.c)
target_include_directories(modified_app PUBLIC "${GRAPH_APP_SOURCE_DIR}/include")
add_dependencies(modified_app runtime_pass_compile)
target_compile_options(modified_app PRIVATE
    -fpass-plugin=${RUNTIME_PASS_PLUGIN}
    -O2
)


add_custom_target(modified_app_ir
    COMMAND clang -fpass-plugin=$<TARGET_FILE:runtime_pass_compile> -emit-llvm -S -O2
        ${GRAPH_APP_SOURCE_DIR}/src/app.c
        -I${GRAPH_APP_SOURCE_DIR}/include -o ${CMAKE_BINARY_DIR}/modified_app_ir.ll
)


add_executable(modified_simple_graph_app $<TARGET_OBJECTS:graph_without_app> $<TARGET_OBJECTS:modified_app>)
target_link_libraries(modified_simple_graph_app SDL2::SDL2)
add_dependencies(modified_simple_graph_app graph_without_app modified_app)


# add_executable(ttt ${APP_SOURCES})
# target_include_directories(ttt PUBLIC "${GRAPH_APP_SOURCE_DIR}/include" "${SDL2_INCLUDE_DIR}")
# target_link_libraries(ttt SDL2::SDL2)

# set(APP_SOURCES
#     ${GRAPH_APP_SOURCE_DIR}/src/app.c
#     ${GRAPH_APP_SOURCE_DIR}/src/sim.c
#     ${GRAPH_APP_SOURCE_DIR}/src/start.c
# )


# add_custom_target(runtime_pass_run
#     COMMAND clang -fpass-plugin=$<TARGET_FILE:runtime_pass_compile> -I${GRAPH_APP_SOURCE_DIR}/include 
#         -O2 ${APP_SOURCES} ${CMAKE_CURRENT_SOURCE_DIR}/src/log.c -o ${CMAKE_BINARY_DIR}/bin/app_with_log
#     COMMAND ${CMAKE_COMMAND} -E copy stat.csv ${CMAKE_CURRENT_SOURCE_DIR}/artefacts
#     DEPENDS runtime_pass_compile
#     SOURCES ${APP_SOURCES} ${CMAKE_CURRENT_SOURCE_DIR}/src/log.c
# )


add_custom_target(draw_graphs
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/src/analyze.py "${CMAKE_CURRENT_SOURCE_DIR}/artefacts"
    SOURCES src/analyze.py artefacts/stat.csv
    DEPENDS stat_pass_run
)


# Working example


add_library(pass_example_compile SHARED pass_example/PassExample.cpp)
target_include_directories(pass_example_compile PUBLIC "${LLVM_INCLUDE_DIRS}")


add_custom_target(pass_example_run
    COMMAND clang -S -O2 -fpass-plugin=$<TARGET_FILE:pass_example_compile> ${CMAKE_CURRENT_SOURCE_DIR}/pass_example/hello.c
    DEPENDS pass_example_compile
    SOURCES pass_example/hello.c
)


# Why this does not work? It skips dependency!
add_executable(pass_example_run_old pass_example/hello.c)
add_dependencies(pass_example_run_old pass_example_compile)
target_compile_options(pass_example_run_old PUBLIC "-fpass-plugin=$<TARGET_FILE:pass_example_compile>")
