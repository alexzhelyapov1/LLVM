add_library(generate_app_pass SHARED src/constructor.cpp)
target_include_directories(generate_app_pass PUBLIC "${LLVM_INCLUDE_DIRS}")


add_library(generate_app OBJECT src/empty.c)
target_include_directories(generate_app PUBLIC "${GRAPH_APP_SOURCE_DIR}/include")

target_compile_options(generate_app PRIVATE
-fpass-plugin=$<TARGET_FILE:generate_app_pass>
-O2
)

add_dependencies(generate_app generate_app_pass)



add_custom_target(generate_app_ir
    COMMAND clang -fpass-plugin=$<TARGET_FILE:generate_app_pass> -I${GRAPH_APP_SOURCE_DIR}/include
        -S -emit-llvm -O2 ${GRAPH_APP_SOURCE_DIR}/src/app.c -o ${IR_OUTPUT_DIR}/generate_app_ir.ll
    COMMAND ${CMAKE_COMMAND} -E copy ${IR_OUTPUT_DIR}/generate_app_ir.ll ${CMAKE_CURRENT_SOURCE_DIR}/artefacts

    DEPENDS generate_app_pass
)



add_executable(graph_with_generated_app $<TARGET_OBJECTS:graph_without_app> $<TARGET_OBJECTS:generate_app>)
target_link_libraries(graph_with_generated_app SDL2::SDL2)
add_dependencies(graph_with_generated_app graph_without_app generate_app)

