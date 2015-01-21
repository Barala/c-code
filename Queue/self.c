# include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Queue
{
	struct Node *front,*rear;
};

struct Node*createNode(int data)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	return temp;
}

struct Queue *createQueue()
{
	struct Queue *q = (struct Queue*)malloc(sizeof(struct Queue));
	q->front = NULL;
	q->rear = NULL;
	return q;
}

void enQueue(struct Queue*q, int data)
{
	struct Node *temp = createNode(data);
	if(q->rear==NULL)
	{
		q->rear = q->front = temp;
		return ;
	}
	
	q->rear->next = temp;
	q->rear = temp;
	return; 
}

int main()
{
	struct Queue *q = createQueue();
	enQueue(q, 5);
	return 0;
}