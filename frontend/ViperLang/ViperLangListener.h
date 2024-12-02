
// Generated from ViperLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ViperLangParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ViperLangParser.
 */
class  ViperLangListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(ViperLangParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ViperLangParser::ProgramContext *ctx) = 0;

  virtual void enterFunction_definition(ViperLangParser::Function_definitionContext *ctx) = 0;
  virtual void exitFunction_definition(ViperLangParser::Function_definitionContext *ctx) = 0;

  virtual void enterVariable_declaration(ViperLangParser::Variable_declarationContext *ctx) = 0;
  virtual void exitVariable_declaration(ViperLangParser::Variable_declarationContext *ctx) = 0;

  virtual void enterStatement(ViperLangParser::StatementContext *ctx) = 0;
  virtual void exitStatement(ViperLangParser::StatementContext *ctx) = 0;

  virtual void enterAssigment_expression(ViperLangParser::Assigment_expressionContext *ctx) = 0;
  virtual void exitAssigment_expression(ViperLangParser::Assigment_expressionContext *ctx) = 0;

  virtual void enterCall_expression(ViperLangParser::Call_expressionContext *ctx) = 0;
  virtual void exitCall_expression(ViperLangParser::Call_expressionContext *ctx) = 0;

  virtual void enterExpression(ViperLangParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ViperLangParser::ExpressionContext *ctx) = 0;

  virtual void enterIf_statement(ViperLangParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(ViperLangParser::If_statementContext *ctx) = 0;

  virtual void enterCondition_expression(ViperLangParser::Condition_expressionContext *ctx) = 0;
  virtual void exitCondition_expression(ViperLangParser::Condition_expressionContext *ctx) = 0;

  virtual void enterFor_statement(ViperLangParser::For_statementContext *ctx) = 0;
  virtual void exitFor_statement(ViperLangParser::For_statementContext *ctx) = 0;


};

