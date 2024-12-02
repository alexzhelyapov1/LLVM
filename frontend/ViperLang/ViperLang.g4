grammar ViperLang;

program:
    function_definition+;

function_definition:
    'function' NAME '(' variable_declaration? (',' variable_declaration)* ')' statement* 'end';

variable_declaration:
    ('int' | 'uint') NAME
    | ('int' | 'uint') NAME '[' INT ']'
    | ('int' | 'uint') '*' NAME;

statement:
    assigment_expression ';'
    | call_expression ';'
    | if_statement
    | for_statement;

assigment_expression:
    NAME '=' expression
    | NAME '[' expression ']' '=' expression;

call_expression:
    NAME '(' expression? (',' expression)* ')';

expression:
    call_expression
    | expression ( '*' | '/') expression
    | expression ( '+' | '-') expression
    | NAME
    | INT;

if_statement:
    'if' '(' condition_expression ')' statement* 'end';

condition_expression:
    condition_expression 'and' condition_expression
    | condition_expression 'or' condition_expression
    | expression ('<' | '>') expression;

for_statement:
    'for' '(' NAME ';' condition_expression ';' assigment_expression ')' statement* 'end';

NAME: [a-zA-Z_]+;
INT: [0-9]+;
STATEMENT: [a-zA-Z]+;
WS: [ \t\r\n]+ -> skip;

// antlr4-parse ViperLang.g4 program -gui < test.v