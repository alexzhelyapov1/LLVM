
// Generated from ViperLang.g4 by ANTLR 4.7.2

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
    virtual antlrcpp::Any visitProgram(ViperLangParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitFunc_def(ViperLangParser::Func_defContext *context) = 0;

    virtual antlrcpp::Any visitFunc_name(ViperLangParser::Func_nameContext *context) = 0;

    virtual antlrcpp::Any visitArguments(ViperLangParser::ArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitArgument(ViperLangParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitType(ViperLangParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitFor_expression(ViperLangParser::For_expressionContext *context) = 0;

    virtual antlrcpp::Any visitIf_expression(ViperLangParser::If_expressionContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(ViperLangParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitElif_statement(ViperLangParser::Elif_statementContext *context) = 0;

    virtual antlrcpp::Any visitElse_statement(ViperLangParser::Else_statementContext *context) = 0;

    virtual antlrcpp::Any visitBody(ViperLangParser::BodyContext *context) = 0;

    virtual antlrcpp::Any visitStatement(ViperLangParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitExpression(ViperLangParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitVar_def(ViperLangParser::Var_defContext *context) = 0;

    virtual antlrcpp::Any visitCall_func(ViperLangParser::Call_funcContext *context) = 0;

    virtual antlrcpp::Any visitVars(ViperLangParser::VarsContext *context) = 0;

    virtual antlrcpp::Any visitCond_expr(ViperLangParser::Cond_exprContext *context) = 0;

    virtual antlrcpp::Any visitExpr(ViperLangParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitVar_name(ViperLangParser::Var_nameContext *context) = 0;


};

