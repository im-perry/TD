// SimpleCLexer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "symbols.h"
#include <errno.h>

extern FILE* yyin;
extern int yylex(void);

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
    int tokenValue = 0;
    yyin = fopen("input.csrc", "rt");
    if(yyin != NULL)
    {
        while ((tokenValue = yylex()) != END)
        {
        printf(" => TOKEN ID: %d; Token Value: %s \n", tokenValue, units[tokenValue]);
        }
    }
    else 
    {
        printf("The file can't be opened. Error: %d", errno);
    }
}