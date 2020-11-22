%{
#include <stdio.h>
#include "ast.h"

void yyerror(char * s);
extern int yylex(void);
%}

%union{
	
	Node	*node;
	char* strings;
	int intVal;
}

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
%token <strings>ID
%token <intVal>NUM
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

%type <node> program
%type <node> declaration_list
%type <node> declaration
%type <node> var_declaration
%type <node> type_specifier
%type <node> fun_declaration
%type <node> params
%type <node> param_list
%type <node> param
%type <node> compound_stmt
%type <node> local_declarations
%type <node> statement_list
%type <node> statement
%type <node> expression_stmt
%type <node> selection_stmt
%type <node> iteration_stmt
%type <node> return_stmt
%type <node> expression
%type <node> var
%type <node> simple_expression
%type <node> relop
%type <node> addtivie_expression
%type <node> addop
%type <node> term
%type <node> mulop
%type <node> factor
%type <node> call
%type <node> args
%type <node> arg_list

%start program
%%
program
	: declaration_list											{ $$ = createProgramNode($1, 0); astRoot = $$;}
	;

declaration_list
	: declaration_list declaration								{ $$ = createDeclarationNode($1, $2);}
	| declaration												{ $$ = createDeclarationNode($1, 0);}
	;

declaration
	: var_declaration											{ $$ = createDeclarationNode($1, 0);}
	| fun_declaration											{ $$ = createDeclarationNode($1, 0);}
	;

var_declaration
	: type_specifier ID END										{ $$ = createVarDelcaration($1, $2, 0);}
	| type_specifier ID SLPAR NUM SRPAR END						{ $$ = createVarDelcaration($1, $2, $4);}
	;

type_specifier
	: INT														{ $$ = createTypeSpecifier("INT");}
	| VOID														{ $$ = createTypeSpecifier("VOID");}
	;

fun_declaration
	: type_specifier ID LPAR params RPAR compound_stmt			{ $$ = createFunctionDeclaration($1, $2, $4, $6);}
	;

params
	: param_list												{ $$ = createParam($1);}
	| VOID														{ $$ = createParam($1);}
	;

param_list
	: param_list COMMA param									{ $$ = $1; addLinkToList($$, $3);}
	| param														{ $$ = createListNode("ParametersList", $1);}
	;

param
	: type_specifier ID											{ $$ = createVarDeclaration($1, $2, 0);}
	| type_specifier ID SLPAR SRPAR								{ $$ = createVarDeclaration($1. $2, 0);}
	;

compound_stmt
	: CLPAR local_declarations statement_list CRPAR				{ $$ = createCompoundStatement($2, $3);}
	;

local_declarations
	: local_declarations var_declaration						{ $$ = createListNode("LocalDeclarations", $1); addLinkToList($$, $2);}
	|
	;

statement_list
	: statement_list statement									{ $$ = createListNode("StatementList", $1); addLinkToList($$, $2);}
	|
	;

statement
	: expression_stmt											{ $$ = createExpressionStatement(NULL);}
	| compound_stmt												{ $$ = createCompoundStatement(NULL, NULL);}
	| selection_stmt											{ $$ = createIfStatement(NULL, NULL, NULL);}			
	| iteration_stmt											{ $$ = createWhileStatement(NULL, NULL);}
	| return_stmt												{ $$ = createReturnStatement(NULL);}
	;

expression_stmt
	: expression END											{ $$ = createExpressionStatement($1);}
	| END														{ $$ = createExpressionStatement(NULL);}
	;

selection_stmt
	: IF LPAR expression RPAR statement							{ $$ = createIfStatement($3, $5, NULL);}
	| IF LPAR expression RPAR statement ELSE statement			{ $$ = createIfStatement($3, $5, %7);}
	;

iteration_stmt
	: WHILE LPAR expression RPAR statement						{ $$ = createWhileStatement($3, $5);}
	;

return_stmt
	: RETURN END												{ $$ = createReturnStatement(NULL);}
	| RETURN expression END										{ $$ = createReturnStatement($2);}
	;

expression
	: var ASSIGN expression										{ $$ = createExpression($1, $3);}
	| simple_expression											{ $$ = createExpression($1, NULL);}
	;

var
	: ID														{ $$ = createVar($1, NULL);}
	| ID SLPAR expression SRPAR									{ $$ = createVar($1, $3);}
	;

simple_expression
	: addtivie_expression relop addtivie_expression				{ $$ = createSimpleExpression($1, $3);}
	| addtivie_expression										{ $$ = createSimpleExpression($1, NULL);}
	;

relop
	: LESS_OR_EQUAL												{ $$ = createRelationalOperator("LESS_OR_EQUAL");}
	| LESS_THAN													{ $$ = createRelationalOperator("LESS_THAN");}
	| GREATER_THAN												{ $$ = createRelationalOperator("GREATER_THAN");}
	| GREATER_OR_EQUAL											{ $$ = createRelationalOperator("GREATER_OR_EQUAL");}
	| EQUAL														{ $$ = createRelationalOperator("EQUAL");}
	| NOT_EQUAL													{ $$ = createRelationalOperator("NOT_EQUAL");}
	;

addtivie_expression
	: addtivie_expression addop term							{ $$ = createAdditiveExpression($1, $3);}
	| term														{ $$ = createAdditiveExpression($1, NULL);}
	;

addop
	: ADD														{ $$ = createAddOperator("ADD");}
	| SUBSTRACT													{ $$ = createAddOperator("SUBSTRACT");}
	;

term
	: term mulop factor											{ $$ = createMultiplier($1, $3);}
	| factor													{ $$ = createMultiplier($1, NULL);}
	;

mulop
	: MULTIPLY													{ $$ = createMulOperator("MULTIPLY");}
	| DIVIDE													{ $$ = createMulOperator("DIVIDE");}
	;

factor
	: LPAR expression RPAR										{ $$ = createFactor($2);}
	| var														{ $$ = createFactor($1);}
	| call														{ $$ = createFactor($1);}
	| NUM														{ $$ = createFactor($1);}
	;

call
	: ID LPAR args RPAR											{ $$ = createCall($1, $3);}
	;

args
	: arg_list													{ $$ = createArgs($1);}
	|
	;

arg_list
	: arg_list COMMA expression									{ $$ = $1; addLinkToList($$, $3);}
	| expression												{ $$ = createListNode("ArgumentsList", $1);}
	;

%%

void yyerror(char * s)
{
	printf("%s\n", s);
}