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
    COMMAND clang -fpass-plugin=$<TARGET_FILE:constructor_pass_compile> -emit-llvm -S -O2
        ${CMAKE_CURRENT_SOURCE_DIR}/src/empty.c
        -I${GRAPH_APP_SOURCE_DIR}/include -o app.ll
    COMMAND ${CMAKE_COMMAND} -E copy app.ll ${CMAKE_CURRENT_SOURCE_DIR}/artefacts
    DEPENDS constructor_pass_compile
)




find_package(SDL2 REQUIRED CONFIG REQUIRED COMPONENTS SDL2)

set(MODIFIED_APP_SOURCES
    ${GRAPH_APP_SOURCE_DIR}/src/sim.c
    ${GRAPH_APP_SOURCE_DIR}/src/start.c
)

add_library(graph_without_app_2 OBJECT ${MODIFIED_APP_SOURCES})
target_include_directories(graph_without_app_2 PUBLIC "${GRAPH_APP_SOURCE_DIR}/include")
target_link_libraries(graph_without_app_2 SDL2::SDL2)


set(CONSTRUCTOR_PASS_PLUGIN $<TARGET_FILE:constructor_pass_compile>) 
add_library(constructored_app OBJECT ${CMAKE_CURRENT_SOURCE_DIR}/src/empty.c)
target_include_directories(constructored_app PUBLIC "${GRAPH_APP_SOURCE_DIR}/include")
add_dependencies(constructored_app constructor_pass_compile)
target_compile_options(constructored_app PRIVATE
    -fpass-plugin=${CONSTRUCTOR_PASS_PLUGIN}
    -O2
)


add_executable(constructored_simple_graph_app $<TARGET_OBJECTS:graph_without_app_2> $<TARGET_OBJECTS:constructored_app>)
target_link_libraries(constructored_simple_graph_app SDL2::SDL2)
add_dependencies(constructored_simple_graph_app graph_without_app_2 constructored_app)
