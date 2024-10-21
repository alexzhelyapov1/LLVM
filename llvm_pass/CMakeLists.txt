add_library(static_stat_pass SHARED src/StatPass.cpp)
target_include_directories(static_stat_pass PUBLIC "${LLVM_INCLUDE_DIRS}")



add_library(runtime_stat_pass SHARED src/RuntimePass.cpp)
target_include_directories(runtime_stat_pass PUBLIC "${LLVM_INCLUDE_DIRS}")



add_library(app_with_static_stat_pass OBJECT ${GRAPH_APP_SOURCE_DIR}/src/app.c)
target_include_directories(app_with_static_stat_pass PUBLIC "${GRAPH_APP_SOURCE_DIR}/include")

target_compile_options(app_with_static_stat_pass PRIVATE
-fpass-plugin=$<TARGET_FILE:static_stat_pass>
-O2
)

add_dependencies(app_with_static_stat_pass static_stat_pass)



add_library(app_with_runtime_stat_pass OBJECT ${GRAPH_APP_SOURCE_DIR}/src/app.c)
target_include_directories(app_with_runtime_stat_pass PUBLIC "${GRAPH_APP_SOURCE_DIR}/include")

target_compile_options(app_with_runtime_stat_pass PRIVATE
-fpass-plugin=$<TARGET_FILE:runtime_stat_pass>
-O2
)

add_dependencies(app_with_runtime_stat_pass runtime_stat_pass)



add_custom_target(app_with_runtime_stat_pass_ir
    COMMAND clang -fpass-plugin=$<TARGET_FILE:runtime_stat_pass> -I${GRAPH_APP_SOURCE_DIR}/include
        -S -emit-llvm -O2 ${GRAPH_APP_SOURCE_DIR}/src/app.c -o ${IR_OUTPUT_DIR}/app_with_runtime_stat_pass_ir.ll
    COMMAND ${CMAKE_COMMAND} -E copy ${IR_OUTPUT_DIR}/app_with_runtime_stat_pass_ir.ll ${CMAKE_CURRENT_SOURCE_DIR}/artefacts

    DEPENDS runtime_stat_pass
)



add_library(log OBJECT src/log.c)
target_compile_definitions(log PRIVATE
    RUNTIME_STAT_CSV_PATH="${CMAKE_CURRENT_SOURCE_DIR}/artefacts/runtime_stat.csv"
)



add_executable(graph_app_with_runtime_stat
    $<TARGET_OBJECTS:app_with_runtime_stat_pass>
    $<TARGET_OBJECTS:graph_without_app>
    $<TARGET_OBJECTS:log>
)
add_dependencies(graph_app_with_runtime_stat app_with_runtime_stat_pass graph_without_app log)
target_link_libraries(graph_app_with_runtime_stat SDL2::SDL2)

