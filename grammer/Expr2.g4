grammar Expr;

prog:   stat* ;
stat:   declaration | assignment | expr ';' | ';' ;
declaration: type ID ('=' expr)? ';' ;
assignment: ID '=' expr ';' ;
type:   'int' ;
expr:   expr ('*'|'/') expr 
    |  expr ('+'|'-') expr 
    | INT 
    | ID  
    | '(' expr ')' ;


TYPE_INT: 'int' ;

ID      : [a-zA-Z_] [a-zA-Z_0-9]* ;
INT     : [0-9]+ ;


COMMENT : '//' .*? [\r\n] -> skip;

NEWLINE : [\r\n]+ -> skip;
WS      : [ \t]+ -> skip ;