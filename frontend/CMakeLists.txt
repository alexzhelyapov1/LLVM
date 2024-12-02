antlr4j -Dlanguage=Cpp ViperLang.g4 -visitor
g++ *.cpp -I /usr/include/antlr4-runtime/ -lantlr4-runtime
./a.out expr.txt