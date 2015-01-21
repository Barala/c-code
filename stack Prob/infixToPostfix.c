#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

struct Stack
{
	int top;
	unsigned int capacity;
	char* array; 
};


struct Stack* createStack(unsigned int capacity)
{
	struct Stack * stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (char*)malloc(stack->capacity * sizeof(char));

	return stack;
}

int isFull(struct Stack *stack)
{	if (stack!=NULL)
	return stack->top == stack->capacity -1;
}


int isEmpty(struct Stack *stack)
{	if (stack!=NULL)
	return stack->top ==  -1;
}

void push(struct Stack* stack, char item)
{
	if (isFull(stack))
	{
		return;
	}
	stack->array[++stack->top]=item;
	//printf("%c Pushed to stack\n",stack->array[stack->top]);
}

char pop(struct Stack* stack)
{
	if (!isEmpty(stack))
	return stack->array[stack->top--];
	return '$';
}

char peek(struct Stack* stack)
{
	if (isEmpty(stack))
	{
		return INT_MIN;
	}
	return stack->array[stack->top];
}

int isOperand(char ch)
{
	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int Prec(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
	}
	return -1;
}

int infToPostfix(char *exp)
{
	int i,k;
	struct Stack *stack = createStack(strlen(exp));
	if(!stack)
		return -1;

	for (i=0, k=-1; exp[i]; ++i)
	{
		if(isOperand(exp[i]))
		{//printf("Check1\n");
			exp[++k] = exp[i];
		}

		else if(exp[i] == '(')
		{
			push(stack,exp[i]);
		}

		else if (exp[i] == ')')
        {
            while (!isEmpty(stack) && peek(stack) != '(')
                exp[++k] = pop(stack);
            if (!isEmpty(stack) && peek(stack) != '(')
                return -1;              
            else
                {
                pop(stack);}
        }

		else 
		{
			while(!isEmpty(stack) && Prec(exp[i]) <= Prec(peek(stack)))
				exp[++k] = pop(stack);
			push(stack,exp[i]);
		}
	}

		while(!isEmpty(stack))
			 exp[++k] = pop(stack);
		exp[++k] = '\0';
		printf("%s\n",exp);
}


int main()
{
	char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
	infToPostfix(exp);
	return 0;
}