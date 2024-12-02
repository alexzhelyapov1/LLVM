// Generated from /home/alex/mipt/LLVM/frontend/ViperLang/ViperLang.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ViperLangParser}.
 */
public interface ViperLangListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(ViperLangParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(ViperLangParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#func_def}.
	 * @param ctx the parse tree
	 */
	void enterFunc_def(ViperLangParser.Func_defContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#func_def}.
	 * @param ctx the parse tree
	 */
	void exitFunc_def(ViperLangParser.Func_defContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#func_name}.
	 * @param ctx the parse tree
	 */
	void enterFunc_name(ViperLangParser.Func_nameContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#func_name}.
	 * @param ctx the parse tree
	 */
	void exitFunc_name(ViperLangParser.Func_nameContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#arguments}.
	 * @param ctx the parse tree
	 */
	void enterArguments(ViperLangParser.ArgumentsContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#arguments}.
	 * @param ctx the parse tree
	 */
	void exitArguments(ViperLangParser.ArgumentsContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#argument}.
	 * @param ctx the parse tree
	 */
	void enterArgument(ViperLangParser.ArgumentContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#argument}.
	 * @param ctx the parse tree
	 */
	void exitArgument(ViperLangParser.ArgumentContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(ViperLangParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(ViperLangParser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#for_expression}.
	 * @param ctx the parse tree
	 */
	void enterFor_expression(ViperLangParser.For_expressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#for_expression}.
	 * @param ctx the parse tree
	 */
	void exitFor_expression(ViperLangParser.For_expressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#if_expression}.
	 * @param ctx the parse tree
	 */
	void enterIf_expression(ViperLangParser.If_expressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#if_expression}.
	 * @param ctx the parse tree
	 */
	void exitIf_expression(ViperLangParser.If_expressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#if_statement}.
	 * @param ctx the parse tree
	 */
	void enterIf_statement(ViperLangParser.If_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#if_statement}.
	 * @param ctx the parse tree
	 */
	void exitIf_statement(ViperLangParser.If_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#elif_statement}.
	 * @param ctx the parse tree
	 */
	void enterElif_statement(ViperLangParser.Elif_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#elif_statement}.
	 * @param ctx the parse tree
	 */
	void exitElif_statement(ViperLangParser.Elif_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#else_statement}.
	 * @param ctx the parse tree
	 */
	void enterElse_statement(ViperLangParser.Else_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#else_statement}.
	 * @param ctx the parse tree
	 */
	void exitElse_statement(ViperLangParser.Else_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#body}.
	 * @param ctx the parse tree
	 */
	void enterBody(ViperLangParser.BodyContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#body}.
	 * @param ctx the parse tree
	 */
	void exitBody(ViperLangParser.BodyContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(ViperLangParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(ViperLangParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(ViperLangParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(ViperLangParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#var_def}.
	 * @param ctx the parse tree
	 */
	void enterVar_def(ViperLangParser.Var_defContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#var_def}.
	 * @param ctx the parse tree
	 */
	void exitVar_def(ViperLangParser.Var_defContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#call_func}.
	 * @param ctx the parse tree
	 */
	void enterCall_func(ViperLangParser.Call_funcContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#call_func}.
	 * @param ctx the parse tree
	 */
	void exitCall_func(ViperLangParser.Call_funcContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#vars}.
	 * @param ctx the parse tree
	 */
	void enterVars(ViperLangParser.VarsContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#vars}.
	 * @param ctx the parse tree
	 */
	void exitVars(ViperLangParser.VarsContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#cond_expr}.
	 * @param ctx the parse tree
	 */
	void enterCond_expr(ViperLangParser.Cond_exprContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#cond_expr}.
	 * @param ctx the parse tree
	 */
	void exitCond_expr(ViperLangParser.Cond_exprContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(ViperLangParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(ViperLangParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link ViperLangParser#var_name}.
	 * @param ctx the parse tree
	 */
	void enterVar_name(ViperLangParser.Var_nameContext ctx);
	/**
	 * Exit a parse tree produced by {@link ViperLangParser#var_name}.
	 * @param ctx the parse tree
	 */
	void exitVar_name(ViperLangParser.Var_nameContext ctx);
}