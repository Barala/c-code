#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


struct Stack
{
	int top;
	unsigned int capacity;
	int *array;
};

struct Stack * createStack(unsigned int capacity)
{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top =-1;
	stack->array = (int*)malloc(stack->capacity*sizeof(struct Stack));
	return stack;
}

int isFull(struct Stack* stack)
{
	if(stack!=NULL)
	return stack->top == stack->capacity -1;
}

int isEmpty(struct Stack* stack)
{
		if(stack != NULL)
		return stack->top == -1;
}

void push(struct Stack* stack, int data)
{
	if (isFull(stack))
	{
		return;
	}
	stack->array[++stack->top] = data;;
	printf("%d Pushed to stack\n",stack->array[stack->top]);	
}

int pop(struct Stack * stack)
{
	if (isEmpty(stack))
	{
		return INT_MIN;
	}
	return stack->array[stack->top--];
}

int peek(struct Stack* stack)
{
	if (isEmpty(stack))
	{
		return INT_MIN;
	}
	return stack->array[stack->top];
}

void print(struct Stack* stack)
{
	int i=0;

	if (isEmpty(stack))
	{
		return;
	}

	while(i<=stack->top)
	{
		printf("%d--",stack->array[i]);
		i++;
	}
}


int main()
{
	struct Stack * stack = NULL;
	isEmpty(stack);
	stack = createStack(100);
	printf("%d Popped from function\n", pop(stack));
	push(stack,10);
	push(stack,20);
	push(stack,30);
	push(stack,40);
	push(stack,50);
	push(stack,60);
	
	printf("%d Popped from function\n", pop(stack));
	printf("%d Popped from functio\n", pop(stack));
	push(stack,70);
	push(stack,80);
	printf("%d Popped from function\n", pop(stack));
	printf("%d Peek of the stack\n", peek(stack));
	
	printf("\n \n");

	print(stack);
	return 0;
}