#include <stdio.h>
#define NIL -1
#define MAX 100

/*Memorization method*/

int lookup[100];

void _Initialize()
{
	int i;
	for(i=0;i<MAX;i++)
		lookup[i]=NIL;
}

int fib(int n)
{
	if(lookup[n]==NIL)
	{
		if(n<=1)
			lookup[n]=n;
		else
			lookup[n] = fib(n-1) + fib(n-2);
	}
	return lookup[n];
}


void print()
{
	int i;
	for(i=0;i<MAX;i++)
		printf(" %d ",lookup[i]);
}


int main()
{
	int n;
	scanf("%d",&n);
	_Initialize();
	printf("Fibonacci %d s value = %d\n",n,fib(n));
	print();
	printf("Fibonacci %d s value = %d\n",n-2,fib(n-2));
	print();
	return 0;
}	