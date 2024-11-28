
// Generated from ViperLang.g4 by ANTLR 4.7.2

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

  virtual void enterFunc_def(ViperLangParser::Func_defContext *ctx) = 0;
  virtual void exitFunc_def(ViperLangParser::Func_defContext *ctx) = 0;

  virtual void enterFunc_name(ViperLangParser::Func_nameContext *ctx) = 0;
  virtual void exitFunc_name(ViperLangParser::Func_nameContext *ctx) = 0;

  virtual void enterArguments(ViperLangParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(ViperLangParser::ArgumentsContext *ctx) = 0;

  virtual void enterArgument(ViperLangParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(ViperLangParser::ArgumentContext *ctx) = 0;

  virtual void enterType(ViperLangParser::TypeContext *ctx) = 0;
  virtual void exitType(ViperLangParser::TypeContext *ctx) = 0;

  virtual void enterFor_expression(ViperLangParser::For_expressionContext *ctx) = 0;
  virtual void exitFor_expression(ViperLangParser::For_expressionContext *ctx) = 0;

  virtual void enterIf_expression(ViperLangParser::If_expressionContext *ctx) = 0;
  virtual void exitIf_expression(ViperLangParser::If_expressionContext *ctx) = 0;

  virtual void enterIf_statement(ViperLangParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(ViperLangParser::If_statementContext *ctx) = 0;

  virtual void enterElif_statement(ViperLangParser::Elif_statementContext *ctx) = 0;
  virtual void exitElif_statement(ViperLangParser::Elif_statementContext *ctx) = 0;

  virtual void enterElse_statement(ViperLangParser::Else_statementContext *ctx) = 0;
  virtual void exitElse_statement(ViperLangParser::Else_statementContext *ctx) = 0;

  virtual void enterBody(ViperLangParser::BodyContext *ctx) = 0;
  virtual void exitBody(ViperLangParser::BodyContext *ctx) = 0;

  virtual void enterStatement(ViperLangParser::StatementContext *ctx) = 0;
  virtual void exitStatement(ViperLangParser::StatementContext *ctx) = 0;

  virtual void enterExpression(ViperLangParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ViperLangParser::ExpressionContext *ctx) = 0;

  virtual void enterVar_def(ViperLangParser::Var_defContext *ctx) = 0;
  virtual void exitVar_def(ViperLangParser::Var_defContext *ctx) = 0;

  virtual void enterCall_func(ViperLangParser::Call_funcContext *ctx) = 0;
  virtual void exitCall_func(ViperLangParser::Call_funcContext *ctx) = 0;

  virtual void enterVars(ViperLangParser::VarsContext *ctx) = 0;
  virtual void exitVars(ViperLangParser::VarsContext *ctx) = 0;

  virtual void enterCond_expr(ViperLangParser::Cond_exprContext *ctx) = 0;
  virtual void exitCond_expr(ViperLangParser::Cond_exprContext *ctx) = 0;

  virtual void enterExpr(ViperLangParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ViperLangParser::ExprContext *ctx) = 0;

  virtual void enterVar_name(ViperLangParser::Var_nameContext *ctx) = 0;
  virtual void exitVar_name(ViperLangParser::Var_nameContext *ctx) = 0;


};

