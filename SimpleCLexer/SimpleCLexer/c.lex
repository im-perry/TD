D			[0-9]
L			[a-zA-Z]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
#include "ast.h"
#include "c.tab.h"

void count();
%}

%%
"/*"			{ comment(); }

"else"			{ count(); return(ELSE); }
"if"			{ count(); return(IF); }
"int"			{ count(); return(INT); }
"return"		{ count(); return(RETURN); }
"void"			{ count(); return(VOID); }
"while"			{ count(); return(WHILE); }

({L})+([{L}|{D}|'_'])*		{ count(); yylval.strings = strdup(yytext); return(ID); }
({D})+({D})*				{ count(); yylval.intVal = atoi(yytext); return(NUM); }


"="			{ count(); return(ASSIGN); }
"+"			{ count(); return(ADD); }
"-"			{ count(); return(SUBSTRACT); }
";"			{ count(); return(END);}
"*"			{ count(); return(MULTIPLY); }
"/"			{ count(); return(DIVIDE); }
"<"			{ count(); return(LESS_THAN); }
"<="		{ count(); return(LESS_OR_EQUAL); }
">"			{ count(); return(GREATER_THAN ); }
">="		{ count(); return(GREATER_OR_EQUAL); }
"=="		{ count(); return(EQUAL); }
"!="		{ count(); return(NOT_EQUAL); }
","			{ count(); return(COMMA); }
"("			{ count(); return(LPAR); }
")"			{ count(); return(RPAR); }
"["			{ count(); return(SLPAR); }
"]"			{ count(); return(SRPAR); }
"{"			{ count(); return(CLPAR); }
"}"			{ count(); return(CRPAR); }

[ \t\v\n\f] {count(); }
.			{ /* ignore bad characters */}
%%

yywrap()
{
	return(1);
}


comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}


int check_type()
{

	return(IDENTIFIER);
}