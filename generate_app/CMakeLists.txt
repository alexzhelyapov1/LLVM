add_library(generate_app_pass SHARED src/constructor_pass.cpp)
target_include_directories(generate_app_pass PUBLIC "${LLVM_INCLUDE_DIRS}" "include")
add_dependencies(compile_passes generate_app_pass)


add_library(generate_app OBJECT src/empty.c)
target_include_directories(generate_app PUBLIC "${GRAPH_APP_SOURCE_DIR}/include")

target_compile_options(generate_app PRIVATE
-fpass-plugin=$<TARGET_FILE:generate_app_pass>
-O2
)

add_dependencies(generate_app generate_app_pass)



add_custom_target(generate_app_ir
    COMMAND clang -fpass-plugin=$<TARGET_FILE:generate_app_pass> -I${GRAPH_APP_SOURCE_DIR}/include
        -S -emit-llvm -O0 ${CMAKE_CURRENT_SOURCE_DIR}/src/empty.c -o ${IR_OUTPUT_DIR}/generate_app_ir.ll
    COMMAND ${CMAKE_COMMAND} -E copy ${IR_OUTPUT_DIR}/generate_app_ir.ll ${CMAKE_CURRENT_SOURCE_DIR}/artefacts

    DEPENDS generate_app_pass
)
add_dependencies(dump_irs generate_app_ir)



add_custom_target(empty_ir
    COMMAND clang -I${GRAPH_APP_SOURCE_DIR}/include
        -S -emit-llvm -O2 ${CMAKE_CURRENT_SOURCE_DIR}/src/empty.c -o ${IR_OUTPUT_DIR}/empty_ir.ll
    COMMAND ${CMAKE_COMMAND} -E copy ${IR_OUTPUT_DIR}/empty_ir.ll ${CMAKE_CURRENT_SOURCE_DIR}/artefacts
)
add_dependencies(dump_irs empty_ir)



add_executable(graph_with_generated_app $<TARGET_OBJECTS:graph_without_app> $<TARGET_OBJECTS:generate_app>)
target_link_libraries(graph_with_generated_app SDL2::SDL2)
add_dependencies(graph_with_generated_app graph_without_app generate_app)
add_dependencies(compile_graph_apps graph_with_generated_app)


# cd build && clang++ $(llvm-config --cppflags --ldflags --libs) ../simple_graph_app/src/sim.c ../generate_app/src/constructor_ee.cpp -I../generate_app/include -I../simple_graph_app/include -lSDL2 && ./a.out

message(${GRAPH_APP_SOURCE_DIR}/src/sim.c)
add_executable(graph_with_ee src/constructor_ee.cpp ${GRAPH_APP_SOURCE_DIR}/src/sim.c)
target_include_directories(graph_with_ee PRIVATE
    "${GRAPH_APP_SOURCE_DIR}/include"
    "${LLVM_INCLUDE_DIRS}"
    "include"
)
target_link_libraries(graph_with_ee SDL2::SDL2 LLVM)
# add_dependencies(compile_graph_apps graph_with_ee)


# add_executable(graph_with_ee_2 /home/alex/mipt/LLVM/simple_graph_app/src/sim.c /home/alex/mipt/LLVM/generate_app/src/constructor_ee.cpp)
# target_include_directories(graph_with_ee_2 PRIVATE
#     /usr/lib/llvm-14/include
#     /home/alex/mipt/LLVM/generate_app/include
#     /home/alex/mipt/LLVM/simple_graph_app/include
# )
# target_compile_definitions(graph_with_ee_2 PRIVATE
#     _GNU_SOURCE
#     __STDC_CONSTANT_MACROS
#     __STDC_FORMAT_MACROS
#     __STDC_LIMIT_MACROS
# )
# target_link_libraries(graph_with_ee_2 PRIVATE
#     LLVM
#     SDL2
# )
# target_link_directories(graph_with_ee_2 PRIVATE
#     /usr/lib/llvm-14/lib
# )
