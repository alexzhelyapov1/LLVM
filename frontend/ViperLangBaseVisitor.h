
// Generated from ViperLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ViperLangVisitor.h"


/**
 * This class provides an empty implementation of ViperLangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ViperLangBaseVisitor : public ViperLangVisitor {
public:

  virtual std::any visitProgram(ViperLangParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_def(ViperLangParser::Func_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_name(ViperLangParser::Func_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArguments(ViperLangParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgument(ViperLangParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(ViperLangParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_expression(ViperLangParser::For_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_expression(ViperLangParser::If_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(ViperLangParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElif_statement(ViperLangParser::Elif_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_statement(ViperLangParser::Else_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBody(ViperLangParser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(ViperLangParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(ViperLangParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_def(ViperLangParser::Var_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall_func(ViperLangParser::Call_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVars(ViperLangParser::VarsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCond_expr(ViperLangParser::Cond_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(ViperLangParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_name(ViperLangParser::Var_nameContext *ctx) override {
    return visitChildren(ctx);
  }


};

