
// Generated from ViperLang.g4 by ANTLR 4.13.2

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

  virtual void enterFunction_definition(ViperLangParser::Function_definitionContext * /*ctx*/) override { }
  virtual void exitFunction_definition(ViperLangParser::Function_definitionContext * /*ctx*/) override { }

  virtual void enterVariable_declaration(ViperLangParser::Variable_declarationContext * /*ctx*/) override { }
  virtual void exitVariable_declaration(ViperLangParser::Variable_declarationContext * /*ctx*/) override { }

  virtual void enterStatement(ViperLangParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(ViperLangParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssigment_expression(ViperLangParser::Assigment_expressionContext * /*ctx*/) override { }
  virtual void exitAssigment_expression(ViperLangParser::Assigment_expressionContext * /*ctx*/) override { }

  virtual void enterCall_expression(ViperLangParser::Call_expressionContext * /*ctx*/) override { }
  virtual void exitCall_expression(ViperLangParser::Call_expressionContext * /*ctx*/) override { }

  virtual void enterExpression(ViperLangParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ViperLangParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterIf_statement(ViperLangParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(ViperLangParser::If_statementContext * /*ctx*/) override { }

  virtual void enterCondition_expression(ViperLangParser::Condition_expressionContext * /*ctx*/) override { }
  virtual void exitCondition_expression(ViperLangParser::Condition_expressionContext * /*ctx*/) override { }

  virtual void enterFor_statement(ViperLangParser::For_statementContext * /*ctx*/) override { }
  virtual void exitFor_statement(ViperLangParser::For_statementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

