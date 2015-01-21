#include<stdio.h>
#include<stdlib.h>

int f1(int);

static int f2(int);

int main(void)
{
	printf("%d",f1(10));
	printf("\n %d",f2(20));
	return 0;
}

int f1(int a)
{
return f2(a);
}

int f2(int a)
{
return 40+a;
}
