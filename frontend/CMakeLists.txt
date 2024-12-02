set(PARSER_GEN_DIR ${CMAKE_CURRENT_BINARY_DIR}/generated)
make_directory(${PARSER_GEN_DIR})

set(PARSER_SOURCES
    ${PARSER_GEN_DIR}/ViperLangBaseListener.cpp
    ${PARSER_GEN_DIR}/ViperLangBaseVisitor.cpp
    ${PARSER_GEN_DIR}/ViperLangLexer.cpp
    ${PARSER_GEN_DIR}/ViperLangListener.cpp
    ${PARSER_GEN_DIR}/ViperLangParser.cpp
    ${PARSER_GEN_DIR}/ViperLangVisitor.cpp
)

add_custom_command(
    OUTPUT ${PARSER_SOURCES}
    COMMAND antlr4 -Dlanguage=Cpp ${CMAKE_CURRENT_SOURCE_DIR}/ViperLang.g4 -visitor -o ${PARSER_GEN_DIR}
    WORKING_DIRECTORY ${PARSER_GEN_DIR}
)

add_custom_target(gen_parser_sources DEPENDS ${PARSER_SOURCES})

add_library(parser ${PARSER_SOURCES})
target_include_directories(parser PUBLIC ${PARSER_GEN_DIR})
target_link_libraries(parser antlr4_static)


add_executable(test_parser main.cpp)
target_link_libraries(test_parser parser)


add_executable(test_frontend frontend.cpp)
target_link_libraries(test_frontend parser)

# # antlr4j -Dlanguage=Cpp ViperLang.g4 -visitor
# # g++ *.cpp -I /usr/include/antlr4-runtime/ -lantlr4-runtime
# # ./a.out expr.txt