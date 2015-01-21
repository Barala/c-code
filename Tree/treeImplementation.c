#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
	int key;
	struct Node *left, *right;
};

struct Node *createNode(int data)
{
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->key = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

//<left>  <root>  <right>
void inOrder(struct Node *node)
{
	if(node==NULL)
		return;
	inOrder(node->left);
	printf("%d ",node->key);
	inOrder(node->right);
}

//<root> <left> <right>
void preOrder(struct Node *node)
{
	if(node==NULL)
		return;
	printf("%d ",node->key);
	preOrder(node->left);
	preOrder(node->right);
}

//<left <right> <root>
void postOrder(struct Node *node)
{
	if(node==NULL)
		return;
	postOrder(node->left);
	postOrder(node->right);
	printf("%d ",node->key);
}

int size(struct Node* node)
{
	if(node == NULL)
		return 0;
	else
	return (size(node->left) + 1 + size(node->right));
}

int main()
{
	struct Node *root = NULL;
	root = createNode(10);
	root->left = createNode(5);
	root->right = createNode(15);
	printf("\n");
	inOrder(root);
	printf("\n");
	preOrder(root);
	printf("\n");
	postOrder(root);
	printf("\nSize of tree = %d",size(root));

	return 0;
}