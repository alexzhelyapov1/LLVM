# cmake_minimum_required(VERSION 3.22)
# set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")

# project(Frontend VERSION 0.1.0)
# find_package(antlr4-runtime CONFIG REQUIRED)

# set(PARSER_SOURCES
#     ${CMAKE_CURRENT_SOURCE_DIR}/ViperLang/ViperLangBaseListener.cpp
#     ${CMAKE_CURRENT_SOURCE_DIR}/ViperLang/ViperLangBaseVisitor.cpp
#     ${CMAKE_CURRENT_SOURCE_DIR}/ViperLang/ViperLangLexer.cpp
#     ${CMAKE_CURRENT_SOURCE_DIR}/ViperLang/ViperLangListener.cpp
#     ${CMAKE_CURRENT_SOURCE_DIR}/ViperLang/ViperLangParser.cpp
#     ${CMAKE_CURRENT_SOURCE_DIR}/ViperLang/ViperLangVisitor.cpp
# )

# # antlr4 -Dlanguage=Cpp ViperLang.g4 -visitor

# add_custom_command(
#     OUTPUT ${PARSER_SOURCES}

# )

# add_library(parser ${PARSER_SOURCES})
# target_include_directories(parser PRIVATE "ViperLang")
# target_link_libraries(parser antlr4_static)

# antlr4j -Dlanguage=Cpp ViperLang.g4 -visitor
# g++ *.cpp -I /usr/include/antlr4-runtime/ -lantlr4-runtime
# ./a.out expr.txt