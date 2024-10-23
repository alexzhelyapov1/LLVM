include_directories("include")


set(SOURCES_WITHOUT_APP
    src/sim.c
    src/start.c
)


add_library(graph_without_app OBJECT ${SOURCES_WITHOUT_APP})
target_link_libraries(graph_without_app SDL2::SDL2)


add_library(app OBJECT src/app.c)



add_executable(simple_graph_app $<TARGET_OBJECTS:graph_without_app> $<TARGET_OBJECTS:app>)
target_link_libraries(simple_graph_app SDL2::SDL2)
add_dependencies(simple_graph_app graph_without_app app)
add_dependencies(compile_graph_apps simple_graph_app)




add_custom_target(app_ir
    COMMAND clang ${CMAKE_CURRENT_SOURCE_DIR}/src/app.c -emit-llvm -S -O2 -I${CMAKE_CURRENT_SOURCE_DIR}/include -o ${IR_OUTPUT_DIR}/app.ll
    COMMAND ${CMAKE_COMMAND} -E copy ${IR_OUTPUT_DIR}/app.ll ${CMAKE_CURRENT_SOURCE_DIR}/artefacts
)
add_dependencies(dump_irs app_ir)