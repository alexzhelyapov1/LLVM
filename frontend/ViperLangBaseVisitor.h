
// Generated from ViperLang.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ViperLangVisitor.h"


/**
 * This class provides an empty implementation of ViperLangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ViperLangBaseVisitor : public ViperLangVisitor {
public:

  virtual antlrcpp::Any visitProgram(ViperLangParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_def(ViperLangParser::Func_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_name(ViperLangParser::Func_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArguments(ViperLangParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(ViperLangParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(ViperLangParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_expression(ViperLangParser::For_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_expression(ViperLangParser::If_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement(ViperLangParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElif_statement(ViperLangParser::Elif_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_statement(ViperLangParser::Else_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBody(ViperLangParser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(ViperLangParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(ViperLangParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_def(ViperLangParser::Var_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_func(ViperLangParser::Call_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVars(ViperLangParser::VarsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCond_expr(ViperLangParser::Cond_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(ViperLangParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_name(ViperLangParser::Var_nameContext *ctx) override {
    return visitChildren(ctx);
  }


};

