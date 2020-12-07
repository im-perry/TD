#ifndef __AST_H
#define __AST_H

#define MAX_NODE_TYPE 50
#define MAX_EXTRA_DATA 50

typedef struct node {
	char type[MAX_NODE_TYPE];
	int numLinks;
	char extraData[MAX_EXTRA_DATA];
	struct node** links;
}Node;

Node* createProgramNode(Node* declaration);
Node* createDeclarationNode(Node* varFunDeclaration);
Node* createVarDeclaration(Node* typeSpecifier, const char* varName, int value);
Node* createTypeSpecifier(const char* typeName);
Node* createFunctionDeclaration(Node* typeSpecifier, const char* functionName, Node* paramsList, Node* compoundStatement);
Node* createParam(Node* param, const char* type);
Node* createCompoundStatement(Node* localDeclarations, Node* statementList);
Node* createExpressionStatement(Node* expression);
Node* createIfStatement(Node* expression, Node* firstStmt, Node* secondStmt);
Node* createWhileStatement(Node* expression, Node* statement);
Node* createReturnStatement(Node* expression);
Node* createExpression(Node* variable, const char* assign, Node* expression);
Node* createVar(const char* varName, Node* expression);
Node* createSimpleExpression(Node* firstAdditive, Node* relOp, Node* secondAdditive);
Node* createRelationalOperator(const char* relationalOperator);
Node* createAdditiveExpression(Node* additive, Node* addOp, Node* term);
Node* createAddOperator(const char* additiveOperator);
Node* createTerm(Node* term, Node* mulOp, Node* factor);
Node* createMulOperator(const char* multiplyOperator);
Node* createFactor(Node* factor);
Node* createStatement(Node* statement);


Node* createDefaultNode(const char* nodeName, unsigned int linksCount);
Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize);
Node* createListNode(const char* listName, Node* firstLink);
void addLinkToList(Node* listNode, Node* linkToAdd);
void printAst(Node* ast, int level);
#endif
