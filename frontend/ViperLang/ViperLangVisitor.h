
// Generated from ViperLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ViperLangParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ViperLangParser.
 */
class  ViperLangVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ViperLangParser.
   */
    virtual std::any visitProgram(ViperLangParser::ProgramContext *context) = 0;

    virtual std::any visitFunction_definition(ViperLangParser::Function_definitionContext *context) = 0;

    virtual std::any visitVariable_declaration(ViperLangParser::Variable_declarationContext *context) = 0;

    virtual std::any visitStatement(ViperLangParser::StatementContext *context) = 0;

    virtual std::any visitAssigment_expression(ViperLangParser::Assigment_expressionContext *context) = 0;

    virtual std::any visitCall_expression(ViperLangParser::Call_expressionContext *context) = 0;

    virtual std::any visitExpression(ViperLangParser::ExpressionContext *context) = 0;

    virtual std::any visitIf_statement(ViperLangParser::If_statementContext *context) = 0;

    virtual std::any visitCondition_expression(ViperLangParser::Condition_expressionContext *context) = 0;

    virtual std::any visitFor_statement(ViperLangParser::For_statementContext *context) = 0;


};

