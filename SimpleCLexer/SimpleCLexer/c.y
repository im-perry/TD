%{
#include <stdio.h>
#include "ast.h"

void yyerror(char * s);
extern int yylex(void);
Node* astRoot = NULL;
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
%type <node> additive_expression
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
	: declaration_list											{ $$ = createProgramNode($1); astRoot = $$;}
	;

declaration_list
	: declaration_list declaration								{ $$ = $1; addLinkToList($$, $2);}
	| declaration												{ $$ = createListNode("DeclarationList", $1);}
	;

declaration
	: var_declaration											{ $$ = createDeclarationNode($1, 0);}
	| fun_declaration											{ $$ = createDeclarationNode($1, 0);}
	;

var_declaration
	: type_specifier ID END										{ $$ = createVarDeclaration($1, $2, 0);}
	| type_specifier ID SLPAR NUM SRPAR END						{ $$ = createVarDeclaration($1, $2, $4);}
	;

type_specifier
	: INT														{ $$ = createTypeSpecifier("INT");}
	| VOID														{ $$ = createTypeSpecifier("VOID");}
	;

fun_declaration
	: type_specifier ID LPAR params RPAR compound_stmt			{ $$ = createFunctionDeclaration($1, $2, $4, $6);}
	;

params
	: param_list												{ $$ = createParam($1, 0);}
	| VOID														{ $$ = createParam(0, "VOID");}
	;

param_list
	: param_list COMMA param									{ $$ = $1; addLinkToList($$, $3);}
	| param														{ $$ = createListNode("ParametersList", $1);}
	;

param
	: type_specifier ID											{ $$ = createVarDeclaration($1, $2, 0);}
	| type_specifier ID SLPAR SRPAR								{ $$ = createVarDeclaration($1, $2, 0);}
	;

compound_stmt
	: CLPAR local_declarations statement_list CRPAR				{ $$ = createCompoundStatement($2, $3);}
	;

local_declarations
	: local_declarations var_declaration						{ $$ = $1; addLinkToList($$, $2);}
	|															{ $$ = createEmptyList("LocalDeclarations");}
	;

statement_list
	: statement_list statement									{ $$ = $1; addLinkToList($$, $2);}
	|															{ $$ = createEmptyList("StatementList");}
	;

statement
	: expression_stmt											{ $$ = createStatement($1);}
	| compound_stmt												{ $$ = createStatement($1);}
	| selection_stmt											{ $$ = createStatement($1);}			
	| iteration_stmt											{ $$ = createStatement($1);}
	| return_stmt												{ $$ = createStatement($1);}
	;

expression_stmt
	: expression END											{ $$ = createExpressionStatement($1);}
	| END														{ $$ = createExpressionStatement(NULL);}
	;

selection_stmt
	: IF LPAR expression RPAR statement							{ $$ = createIfStatement($3, $5, NULL);}
	| IF LPAR expression RPAR statement ELSE statement			{ $$ = createIfStatement($3, $5, $7);}
	;

iteration_stmt
	: WHILE LPAR expression RPAR statement						{ $$ = createWhileStatement($3, $5);}
	;

return_stmt
	: RETURN END												{ $$ = createReturnStatement(NULL);}
	| RETURN expression END										{ $$ = createReturnStatement($2);}
	;

expression
	: var ASSIGN expression										{ $$ = createExpression($1, "ASSIGN", $3);}
	| simple_expression											{ $$ = createExpression(NULL, NULL, $1);}
	;

var
	: ID														{ $$ = createVar($1, NULL);}
	| ID SLPAR expression SRPAR									{ $$ = createVar($1, $3);}
	;

simple_expression
	: additive_expression relop additive_expression				{ $$ = createSimpleExpression($1, $2, $3);}
	| additive_expression										{ $$ = createSimpleExpression($1, NULL, NULL);}
	;

relop
	: LESS_OR_EQUAL												{ $$ = createRelationalOperator("LESS_OR_EQUAL");}
	| LESS_THAN													{ $$ = createRelationalOperator("LESS_THAN");}
	| GREATER_THAN												{ $$ = createRelationalOperator("GREATER_THAN");}
	| GREATER_OR_EQUAL											{ $$ = createRelationalOperator("GREATER_OR_EQUAL");}
	| EQUAL														{ $$ = createRelationalOperator("EQUAL");}
	| NOT_EQUAL													{ $$ = createRelationalOperator("NOT_EQUAL");}
	;

additive_expression
	: additive_expression addop term							{ $$ = $1; addLinkToList($$, $2); addLinkToList($$, $3);}
	| term														{ $$ = createListNode("AdditiveExpression", $1);}
	;

addop
	: ADD														{ $$ = createAddOperator("ADD");}
	| SUBSTRACT													{ $$ = createAddOperator("SUB");}
	;

term
	: term mulop factor											{ $$ = $3; addLinkToList($$, $2); addLinkToList($$, $1);}
	| factor													{ $$ = createListNode("Term", $1);}
	;

mulop
	: MULTIPLY													{ $$ = createMulOperator("MULT");}
	| DIVIDE													{ $$ = createMulOperator("DIV");}
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
	|															{ $$ = NULL;}
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