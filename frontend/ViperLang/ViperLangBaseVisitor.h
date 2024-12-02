
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

  virtual std::any visitFunction_definition(ViperLangParser::Function_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_declaration(ViperLangParser::Variable_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(ViperLangParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssigment_expression(ViperLangParser::Assigment_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall_expression(ViperLangParser::Call_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(ViperLangParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(ViperLangParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition_expression(ViperLangParser::Condition_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_statement(ViperLangParser::For_statementContext *ctx) override {
    return visitChildren(ctx);
  }


};

