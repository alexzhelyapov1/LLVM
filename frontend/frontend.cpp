#include <any>
#include <iostream>
#include "ViperLangLexer.h"
#include "ViperLangParser.h"
#include "ViperLangVisitor.h"
#include "antlr4-runtime.h"
// #include "llvm/IR/IRBuilder.h"
// #include "llvm/IR/LLVMContext.h"
// #include "llvm/IR/Module.h"
// #include "llvm/IR/Verifier.h"
// #include "llvm/Support/raw_ostream.h"
// using namespace llvm;


struct Walker : public ViperLangVisitor {
    std::any visitProgram(ViperLangParser::ProgramContext *context) override {
        std::cout << "Number of functions: " << context->children.size() << std::endl;
        return nullptr;
    }

    std::any visitFunction_definition(ViperLangParser::Function_definitionContext *context) override {}
    std::any visitVariable_declaration(ViperLangParser::Variable_declarationContext *context) override {}
    std::any visitStatement(ViperLangParser::StatementContext *context) override {}
    std::any visitAssigment_expression(ViperLangParser::Assigment_expressionContext *context) override {}
    std::any visitCall_expression(ViperLangParser::Call_expressionContext *context) override {}
    std::any visitExpression(ViperLangParser::ExpressionContext *context) override {}
    std::any visitIf_statement(ViperLangParser::If_statementContext *context) override {}
    std::any visitCondition_expression(ViperLangParser::Condition_expressionContext *context) override {}
    std::any visitFor_statement(ViperLangParser::For_statementContext *context) override {}
};


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
  ViperLangLexer lexer(&input);

  // Create a token stream from the lexer
  antlr4::CommonTokenStream tokens(&lexer);

  // Create a parser from the token stream
  ViperLangParser parser(&tokens);

  // Display the parse tree
//   std::cout /* outs() */ << parser.program()->toStringTree() << "\n";
//   return 0;

  // Associate a visitor with the Expr context
  Walker walker;
//   TreeDumpWalker walker;
  walker.visitProgram(parser.program());
//   std::cout /* outs() */ << "Visitor output: " << res << "\n";
  return 0;

//   LLVMContext context;
//   Module *module = new Module("top", context);
//   IRBuilder<> builder(context);

//   // declare void @main()
//   FunctionType *funcType = FunctionType::get(builder.getInt32Ty(), false);
//   Function *mainFunc =
//       Function::Create(funcType, Function::ExternalLinkage, "main", module);
//   // entry:
//   BasicBlock *entryBB = BasicBlock::Create(context, "entry", mainFunc);

//   builder.SetInsertPoint(entryBB);
//   TreeLLVMWalker walker(&builder);
//   builder.CreateRet(walker.visitExpr(parser.expr()).as<Value *>());

//   std::cout /* outs() */ << "[LLVM IR]\n";
//   module->print(std::cout /* outs() */, nullptr);
//   std::cout /* outs() */ << "\n";
//   bool verif = verifyFunction(*mainFunc, &std::cout /* outs() */);
//   std::cout /* outs() */ << "[VERIFICATION] " << (!verif ? "OK\n\n" : "FAIL\n\n");

//   return 0;
}