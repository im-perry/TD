// SimpleCLexer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "symbols.h"
#include <errno.h>

extern FILE* yyin;
//extern int yylex(void);
extern int yyparse(void);

const char* units[] = {
                        "END",
                        "INT",
                        "VOID",
                        "WHILE",
                        "IF",
                        "ELSE",
                        "RETURN",
                        "CONSTANT",
                        "ASSIGN",
                        "ADD",
                        "SUBSTRACT",
                        "IDENTIFIER",
                        "SEMICOLON",
                        "ID",
                        "NUM",
                        "MULTIPLY",
                        "DIVIDE",
                        "LESS_THAN",
                        "LESS_OR_EQUAL",
                        "GREATER_THAN",
                        "GREATER_OR_EQUAL",
                        "EQUAL",
                        "NOT_EQUAL",
                        "COMMA",
                        "LPAR",
                        "RPAR",
                        "SLPAR",
                        "SRPAR",
                        "CLPAR",
                        "CRPAR"};

int main()
{
    //int tokenValue = 0;
    yyin = fopen("input.csrc", "rt");

    if(yyin != NULL)
    {
        int result = yyparse();
        switch(result)
        {
            case 0:
                printf("Parse process sucessful.\n");
                break;
            case 1:
                printf("The input is invalid.\n");
                break;
            case 2:
                printf("Out of memory.\n");
                break;
            default:
                break;
        }
        fclose(yyin);
    }
    else 
    {
        printf("The file can't be opened. Error: %d", errno);
    }
}