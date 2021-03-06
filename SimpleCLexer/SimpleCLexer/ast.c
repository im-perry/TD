#include "ast.h"
#include <malloc.h>
#include <string.h>
#include <stdio.h>

Node* createDefaultNode(const char* nodeName, unsigned int linksCount)
{
	Node* retNode = (Node*)malloc(sizeof(Node));
	if (retNode)
	{
		memset(retNode, 0, sizeof(Node));
		if (nodeName)
		{
			strcpy(retNode->type, nodeName);
		}
		retNode->numLinks = linksCount;
		if (linksCount > 0)
		{
			retNode->links = (Node**)malloc(linksCount * sizeof(Node*));
		}
	}
	return retNode;
}

Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize)
{
	if (nodeToResize->numLinks == 0)
	{
		nodeToResize->links = (Node**)malloc(newSize * sizeof(Node*));
	}
	else
	{
		nodeToResize->links = (Node**)realloc(nodeToResize->links, newSize * sizeof(Node*));
	}
	nodeToResize->numLinks = newSize;
	return nodeToResize;
}

Node* createListNode(const char* listName, Node* firstLink)
{
	Node* retNode = createDefaultNode(listName, 1);
	retNode->links[0] = firstLink;
	return retNode;
}
 
Node* createEmptyList(const char* listName)
{
	Node* retNode = createDefaultNode(listName, 0);
	return retNode;
}

void addLinkToList(Node* listNode, Node* linkToAdd)
{
	unsigned int numLinks = listNode->numLinks;
	resizeNodeLinks(listNode, numLinks + 1);
	listNode->links[numLinks] = linkToAdd;
}

void printAst(Node* ast, int level)
{
	int idx = 0;
	if (ast)
	{
		for (idx = 0; idx < level; idx++)
		{
			printf(" ");
		}
		if (ast->type)
		{
			printf("%s ", ast->type);
		}
		if (ast->numLinks)
		{
			printf(" - %d - %s\n", ast->numLinks, ast->extraData);
		}
		else
		{
			printf(" - %s\n", ast->extraData);
		}
		for (idx = 0; idx < ast->numLinks; idx++)
		{

			printAst(ast->links[idx], level + 1);
		}
	}
}

Node* createProgramNode(Node* declaration)
{
	Node* retNode = createDefaultNode("ProgramUnit", 1);
	if (retNode)
	{
		retNode->links[0] = declaration;
	}

	return retNode;

}

Node* createDeclarationNode(Node* varFunDeclaration)
{
	Node* retNode = createDefaultNode("Declaration", 1);
	if (retNode)
	{
		retNode->links[0] = varFunDeclaration;
	}
	return retNode;
}

Node* createVarDeclaration(Node* typeSpecifier, const char* varName, int value)
{
	Node* retNode = createDefaultNode("VariableDeclaration", 2);

	if (retNode)
	{
		retNode->links[0] = typeSpecifier;
		if (varName)
			sprintf(retNode->extraData, "%s", varName);
		retNode->links[1] = createDefaultNode("IntValue", 0);
		sprintf(retNode->links[1]->extraData, "%d", value);
	}

	return retNode;

}

Node* createTypeSpecifier(const char* typeName)
{
	Node* retVal = createDefaultNode("TypeSpecifier", 0);
	if (typeName)
		sprintf(retVal->extraData, "%s", typeName);
	return retVal;
}

Node* createFunctionDeclaration(Node* typeSpecifier, const char* functionName, Node* paramsList, Node* compoundStatement)
{

	Node* retNode = createDefaultNode("FunctionDefinition", 3);

	if (retNode)
	{
		retNode->links[0] = typeSpecifier;
		retNode->links[1] = paramsList;
		retNode->links[2] = compoundStatement;
		if (functionName)
			strcpy(retNode->extraData, functionName);
	}

	return retNode;
}

Node* createParam(Node* param, const char* type) 
{
	if (param) {
		Node* retNode = createDefaultNode("Parameters", 1);

		if (retNode)
		{
			retNode->links[0] = param;
			if (type)
				strcpy(retNode->extraData, type);
		}

		return retNode;
	}
	else {
		Node* retNode = createDefaultNode("Parameters", 0);
		if (retNode)
		{
			if (type)
				strcpy(retNode->extraData, type);
		}
		return retNode;
	}
}

Node* createCompoundStatement(Node* localDeclarations, Node* statementList)
{
	Node* retNode = createDefaultNode("CompoundStatement", 2);

	if (retNode)
	{
		retNode->links[0] = localDeclarations;
		retNode->links[1] = statementList;
	}

	return retNode;
}

Node* createExpressionStatement(Node* expression)
{
	Node* retNode = createDefaultNode("ExpressionStatement", 1);

	if (retNode)
	{
		retNode->links[0] = expression;
	}

	return retNode;
}

Node* createIfStatement(Node* expression, Node* firstStmt, Node* secondStmt)
{
	Node* retNode = createDefaultNode("IfStatement", 3);

	if (retNode)
	{
		retNode->links[0] = expression;
		retNode->links[1] = firstStmt;
		retNode->links[2] = secondStmt;
	}

	return retNode;
}

Node* createWhileStatement(Node* expression, Node* statement)
{
	Node* retNode = createDefaultNode("WhileStatement", 3);

	if (retNode)
	{
		retNode->links[0] = expression;
		retNode->links[1] = statement;
	}

	return retNode;
}

Node* createReturnStatement(Node* expression)
{
	Node* retNode = createDefaultNode("ReturnStatement", 1);

	if (retNode)
	{
		retNode->links[0] = expression;
	}

	return retNode;
}

Node* createExpression(Node* variable, const char* assign, Node* expression)
{
	if (variable && assign) {
		Node* retNode = createDefaultNode("Expression", 2);

		if (retNode)
		{
			retNode->links[0] = variable;
			retNode->links[1] = expression;
			if (assign)
				strcpy(retNode->extraData, assign);
		}

		return retNode;
	}
	else {
		Node* retNode = createDefaultNode("Expression", 1);

		if (retNode)
		{
			retNode->links[0] = expression;
		}

		return retNode;
	}
}

Node* createVar(const char* varName, Node* expression)
{
	if (expression) {
		Node* retNode = createDefaultNode("Variable", 1);

		if (retNode)
		{
			if (varName)
				sprintf(retNode->extraData, "%s", varName);
			retNode->links[0] = expression;
		}

		return retNode;
	}
	else {
		Node* retVal = createDefaultNode("Variable", 0);
		if (varName)
			sprintf(retVal->extraData, "%s", varName);
		return retVal;
	}
}

Node* createSimpleExpression(Node* firstAdditive, Node* relOp, Node* secondAdditive)
{
	if (secondAdditive) {
		Node* retNode = createDefaultNode("SimpleExpression", 3);

		if (retNode)
		{
			retNode->links[0] = firstAdditive;
			retNode->links[1] = relOp;
			retNode->links[2] = secondAdditive;
		}

		return retNode;
	}
	else {
		Node* retNode = createDefaultNode("SimpleExpression", 1);

		if (retNode)
		{
			retNode->links[0] = firstAdditive;
		}

		return retNode;
	}
	
}

Node* createRelationalOperator(const char* relationalOperator)
{
	Node* retVal = createDefaultNode("RelationalOperator", 0);
	if (relationalOperator)
		sprintf(retVal->extraData, "%s", relationalOperator);
	return retVal;
}

Node* createAdditiveExpression(Node* additive, Node* addOp, Node* term)
{
	if (additive && addOp) {
		Node* retNode = createDefaultNode("AdditiveExpression", 3);

		if (retNode)
		{
			retNode->links[0] = additive;
			retNode->links[1] = addOp;
			retNode->links[2] = term;
		}

		return retNode;
	}
	else {
		Node* retNode = createDefaultNode("AdditiveExpression", 1);

		if (retNode)
		{
			retNode->links[0] = term;
		}

		return retNode;
	}
	
}

Node* createAddOperator(const char* additiveOperator)
{
	Node* retVal = createDefaultNode("AddOperator", 0);
	if (additiveOperator)
		sprintf(retVal->extraData, "%s", additiveOperator);
	return retVal;
}

Node* createTerm(Node* term, Node* mulOp, Node* factor)
{
	Node* retNode = createDefaultNode("Term", 2);

	if (retNode)
	{
		retNode->links[0] = term;
		retNode->links[1] = mulOp;
		retNode->links[2] = factor;
	}

	return retNode;
}

Node* createMulOperator(const char* multiplyOperator)
{
	Node* retVal = createDefaultNode("MulOperator", 0);
	if (multiplyOperator)
		sprintf(retVal->extraData, "%s", multiplyOperator);
	return retVal;
}

Node* createFactor(Node* factor)
{
	Node* retNode = createDefaultNode("Factor", 1);

	if (retNode)
	{
		retNode->links[0] = factor;
	}

	return retNode;
}

Node* createCall(const char* identifier, Node* args)
{
	Node* retNode = createDefaultNode("Call", 1);
	if (retNode)
	{
		retNode->links[0] = args;
		if (args)
			strcpy(retNode->extraData, identifier);
	}

	return retNode;
}

Node* createArgs(Node* argList)
{
	Node* retNode = createDefaultNode("Arguments", 1);
	if (retNode)
		retNode->links[0] = argList;
	return retNode;
}

Node* createStatement(Node* statement) {
	
	Node* retNode = createDefaultNode("Statement", 1);
	if (retNode)
		retNode->links[0] = statement;
	return retNode;
}