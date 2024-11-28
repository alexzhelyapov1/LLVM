grammar ViperLang;

// Parser rule
program:
    // function_definition+;
    func_def+;

func_def:
    'function' func_name '(' arguments? ')' body 'end';

func_name:
    NAME;

arguments:
    argument | argument ',' argument;

argument:
    type var_name;

type:
    'int';


for_expression:
    'for' '(' var_def ';' cond_expr ';' body ')' body 'end';

if_expression:
    if_statement elif_statement* else_statement* 'end';

if_statement:
    'if' '(' cond_expr ')' body;
elif_statement:
    'elif' '(' cond_expr ')' body;
else_statement:
    'else' body;

body:
    statement+;

statement:
    var_def ';'
    | call_func ';'
    | for_expression
    | if_expression
    | expression ';';

expression:
    var_name '=' expr;

var_def:
    type var_name '=' expr;

call_func:
    func_name '(' vars? ')';

vars:
    NAME
    | NAME ',' NAME;

cond_expr:
    cond_expr 'and' cond_expr
    | cond_expr 'or' cond_expr
    | expr ( '<' | '>' ) expr;

expr:
	| expr ( '*' | '/') expr
	| expr ( '+' | '-') expr
	| INT
    | var_name;

var_name:
    NAME;
// function_definition:
//     'function' NAME '{' arguments '}' statement+ 'end';

// arguments:
//     argument | argument ',' arguments;
// argument:
//     type NAME;
// type:
//     'int' | 'int *';

// statement:
//     variable_definition
//     | binary_expression
//     | call_expression;

// variable_definition:
//     type NAME '=' 
// name: 'tnpname';
// body: 'tmpbody';


// Lexer rules
INT: [0-9]+;
NAME: [A-Z]+;
BODY: [a-z]+;
WS: [ \t\r\n]+ -> skip;