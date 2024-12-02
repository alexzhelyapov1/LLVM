
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

    virtual std::any visitFunc_def(ViperLangParser::Func_defContext *context) = 0;

    virtual std::any visitFunc_name(ViperLangParser::Func_nameContext *context) = 0;

    virtual std::any visitArguments(ViperLangParser::ArgumentsContext *context) = 0;

    virtual std::any visitArgument(ViperLangParser::ArgumentContext *context) = 0;

    virtual std::any visitType(ViperLangParser::TypeContext *context) = 0;

    virtual std::any visitFor_expression(ViperLangParser::For_expressionContext *context) = 0;

    virtual std::any visitIf_expression(ViperLangParser::If_expressionContext *context) = 0;

    virtual std::any visitIf_statement(ViperLangParser::If_statementContext *context) = 0;

    virtual std::any visitElif_statement(ViperLangParser::Elif_statementContext *context) = 0;

    virtual std::any visitElse_statement(ViperLangParser::Else_statementContext *context) = 0;

    virtual std::any visitBody(ViperLangParser::BodyContext *context) = 0;

    virtual std::any visitStatement(ViperLangParser::StatementContext *context) = 0;

    virtual std::any visitExpression(ViperLangParser::ExpressionContext *context) = 0;

    virtual std::any visitVar_def(ViperLangParser::Var_defContext *context) = 0;

    virtual std::any visitCall_func(ViperLangParser::Call_funcContext *context) = 0;

    virtual std::any visitVars(ViperLangParser::VarsContext *context) = 0;

    virtual std::any visitCond_expr(ViperLangParser::Cond_exprContext *context) = 0;

    virtual std::any visitExpr(ViperLangParser::ExprContext *context) = 0;

    virtual std::any visitVar_name(ViperLangParser::Var_nameContext *context) = 0;


};

