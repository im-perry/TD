%{
#include <stdio.h>

void yyerror(char * s);
extern int yylex(void);
%}
%token END
%token INT
%token VOID
%token WHILE
%token IF
%token ELSE
%token RETURN
%token CONSTANT
%token ASSIGN
%token ADD
%token SUBSTRACT
%token IDENTIFIER
%token SEMICOLON
%token ID
%token NUM
%token MULTIPLY
%token DIVIDE
%token LESS_THAN
%token LESS_OR_EQUAL
%token GREATER_THAN
%token GREATER_OR_EQUAL
%token EQUAL
%token NOT_EQUAL
%token COMMA
%token LPAR
%token RPAR
%token SLPAR
%token SRPAR
%token CLPAR
%token CRPAR

%start program
%%
program
	: declaration_list
	;

declaration_list
	: declaration_list declaration
	| declaration
	;

declaration
	: var_declaration
	| fun_declaration
	;

var_declaration
	: type_specifier ID SEMICOLON
	| type_specifier ID SLPAR NUM SRPAR SEMICOLON
	;

type_specifier
	: INT
	| VOID
	;

fun_declaration
	: type_specifier ID LPAR params LPAR compound_stmt
	;

params
	: param_list
	| VOID
	;

param_list
	: param_list COMMA param
	| param
	;

param
	: type_specifier ID
	| type_specifier ID SLPAR SRPAR
	;

compound_stmt
	: CLPAR local_declarations statement_list CLPAR
	;

local_declarations
	: local_declarations var_declaration
	|
	;

statement_list
	: statement_list statement
	|
	;

statement
	: expression_stmt
	| compound_stmt
	| selection_stmt
	| iteration_stmt
	| return_stmt
	;

expression_stmt
	: expression SEMICOLON
	| SEMICOLON
	;

selection_stmt
	: IF LPAR expression RPAR statement
	| IF LPAR expression RPAR statement ELSE statement
	;

iteration_stmt
	: WHILE LPAR expression RPAR statement
	;

return_stmt
	: RETURN SEMICOLON
	| RETURN expression SEMICOLON
	;

expression
	: var ASSIGN expression
	| simple_expression
	;

var
	: ID
	| ID SLPAR expression SRPAR
	;

simple_expression
	: addtivie_expression relop addtivie_expression
	| addtivie_expression
	;

relop
	: LESS_OR_EQUAL
	| LESS_THAN
	| GREATER_THAN
	| GREATER_OR_EQUAL
	| EQUAL
	| NOT_EQUAL
	;

addtivie_expression
	: addtivie_expression addop term
	| term
	;

addop
	: ADD
	| SUBSTRACT
	;

term
	: term mulop factor
	| factor
	;

mulop
	: MULTIPLY
	| DIVIDE
	;

factor
	: LPAR expression RPAR
	| var
	| call
	| NUM
	;

call
	: ID LPAR args RPAR
	;

args
	: arg_list
	|
	;

arg_list
	: arg_list COMMA expression
	| expression
	;

%%

void yyerror(char * s)
{
	printf("%s\n", s);
}