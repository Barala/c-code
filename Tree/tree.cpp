#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	bool rightThread;
};

struct Node * newNode(int data)
{
	struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

void inOrder(struct Node *root)
{
	if(root==NULL)
		return;
	inOrder(root->left);
	printf("%d->",root->data);
	inOrder(root->right);
}

//Inorder traversal using threaded node
struct Node *leftMost(struct Node *root)
{
	if(!root)
		return NULL;
	if(root->left==NULL)
			return root;
	
	leftMost(root->left);
}

void inOrder2(struct Node *root)
{
	struct Node* current = leftMost(root);
	while(current!=NULL)
	{
		printf("%d->",current->data);
		if (current->rightThread)
		{
			current = current->right;
		}
		else
			current = leftMost(current->right);
	}
}

int size(struct Node * root)
{
	if(root == NULL)
		return 0;
	return (size(root->left) + 1 + size(root->right));
}

int sameTree(struct Node * root, struct Node *root1)
{
	if(root==NULL && root1 ==NULL)
		return 1;
	if(root!=NULL && root1!=NULL)
	{
		return (root->data == root1->data && sameTree(root->left,root1->left) && sameTree(root->right, root1->right));
	}
	return 0;
}

int maxDepth(struct Node * root)
{
	int ldepth,rdepth;
	if(root == NULL)
		return 0;
	else
	{
		ldepth = maxDepth(root->left);
		rdepth = maxDepth(root->right);
	if (ldepth >= rdepth)
		return (ldepth+1);
	else
		return (rdepth+1);
	}
}

void deleteTree(struct Node * root1)
{
	if (!root1)
		return;
	deleteTree(root1->left);
	deleteTree(root1->right);
	printf("Deleting Node %d\n",root1->data);
	free(root1);
}

void mirrorTree(struct Node* root)
{
	
	if(root==NULL)
		return ;
	else
	{
		struct Node *temp;
		mirrorTree(root->left);
		mirrorTree(root->right);

		//swap
		temp = root->left;
		root->left == root->right;
		root->right = temp;
	}
}

int main()
{
	struct Node *root = newNode(3),*root1;
	root->left = newNode(1);
	root->right = newNode(4);
	root->left->left = newNode(0);
	root->left->right = newNode(2);
	
	root1 = newNode(3);
	root1->left = newNode(1);
	root1->right = newNode(4);
	root1->left->left = newNode(0);
	root1->left->right = newNode(2);
	printf("%d\n",root1->data);
	inOrder(root);
	cout<<"   "<<size(root)<<endl;
	cout<<sameTree(root, root1)<< " " <<maxDepth(root)<<" "<<maxDepth(root1)<<endl;
	deleteTree(root1);
	mirrorTree(root);
	inOrder(root);
	return 0;
}
