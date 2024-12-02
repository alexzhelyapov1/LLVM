#include <any>
#include <iostream>
#include "ExprLexer.h"
#include "ExprParser.h"
// #include "ExprVisitor.h"
#include "antlr4-runtime.h"


int main(int argc, const char *argv[]) {
  if (argc != 2) {
    std::cout /* outs() */ << "[ERROR] Need 1 argument: file with expression\n";
    return 1;
  }
  // Open file
  std::ifstream stream;
  stream.open(argv[1]);

  // Provide the input text in a stream
  antlr4::ANTLRInputStream input(stream);

  // Create a lexer from the input
  ExprLexer lexer(&input);

  // Create a token stream from the lexer
  antlr4::CommonTokenStream tokens(&lexer);

  // Create a parser from the token stream
  ExprParser parser(&tokens);

  // Display the parse tree
  std::cout /* outs() */ << parser.prog()->toStringTree() << "\n";
  return 0;
}