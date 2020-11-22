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
Node* createFunctionDeclarationNode(Node* typeSpecifier, const char* functionName, Node* paramsList, Node* compoundStatement);

Node* createDefaultNode(const char* nodeName, unsigned int linksCount);
Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize);
Node* createListNode(const char* listName, Node* firstLink);
void addLinkToList(Node* listNode, Node* linkToAdd);
void printAst(Node* ast, int level);
#endif
