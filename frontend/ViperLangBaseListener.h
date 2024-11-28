
// Generated from ViperLang.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ViperLangListener.h"


/**
 * This class provides an empty implementation of ViperLangListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ViperLangBaseListener : public ViperLangListener {
public:

  virtual void enterProgram(ViperLangParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ViperLangParser::ProgramContext * /*ctx*/) override { }

  virtual void enterFunc_def(ViperLangParser::Func_defContext * /*ctx*/) override { }
  virtual void exitFunc_def(ViperLangParser::Func_defContext * /*ctx*/) override { }

  virtual void enterFunc_name(ViperLangParser::Func_nameContext * /*ctx*/) override { }
  virtual void exitFunc_name(ViperLangParser::Func_nameContext * /*ctx*/) override { }

  virtual void enterArguments(ViperLangParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(ViperLangParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterArgument(ViperLangParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(ViperLangParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterType(ViperLangParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(ViperLangParser::TypeContext * /*ctx*/) override { }

  virtual void enterFor_expression(ViperLangParser::For_expressionContext * /*ctx*/) override { }
  virtual void exitFor_expression(ViperLangParser::For_expressionContext * /*ctx*/) override { }

  virtual void enterIf_expression(ViperLangParser::If_expressionContext * /*ctx*/) override { }
  virtual void exitIf_expression(ViperLangParser::If_expressionContext * /*ctx*/) override { }

  virtual void enterIf_statement(ViperLangParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(ViperLangParser::If_statementContext * /*ctx*/) override { }

  virtual void enterElif_statement(ViperLangParser::Elif_statementContext * /*ctx*/) override { }
  virtual void exitElif_statement(ViperLangParser::Elif_statementContext * /*ctx*/) override { }

  virtual void enterElse_statement(ViperLangParser::Else_statementContext * /*ctx*/) override { }
  virtual void exitElse_statement(ViperLangParser::Else_statementContext * /*ctx*/) override { }

  virtual void enterBody(ViperLangParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(ViperLangParser::BodyContext * /*ctx*/) override { }

  virtual void enterStatement(ViperLangParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(ViperLangParser::StatementContext * /*ctx*/) override { }

  virtual void enterExpression(ViperLangParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ViperLangParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterVar_def(ViperLangParser::Var_defContext * /*ctx*/) override { }
  virtual void exitVar_def(ViperLangParser::Var_defContext * /*ctx*/) override { }

  virtual void enterCall_func(ViperLangParser::Call_funcContext * /*ctx*/) override { }
  virtual void exitCall_func(ViperLangParser::Call_funcContext * /*ctx*/) override { }

  virtual void enterVars(ViperLangParser::VarsContext * /*ctx*/) override { }
  virtual void exitVars(ViperLangParser::VarsContext * /*ctx*/) override { }

  virtual void enterCond_expr(ViperLangParser::Cond_exprContext * /*ctx*/) override { }
  virtual void exitCond_expr(ViperLangParser::Cond_exprContext * /*ctx*/) override { }

  virtual void enterExpr(ViperLangParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(ViperLangParser::ExprContext * /*ctx*/) override { }

  virtual void enterVar_name(ViperLangParser::Var_nameContext * /*ctx*/) override { }
  virtual void exitVar_name(ViperLangParser::Var_nameContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

