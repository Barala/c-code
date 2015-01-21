#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
	if(n==0)
		return 1;
	else
		return (n*factorial(n-1));
}

int combination(int n, int r)
{
	return (factorial(n)/(factorial(r)*factorial(n-r))); 
}


int R1(int n)
{
	int i,count=n-1;
	for(i=2;i<n;i++)
	{
		count += combination(n-1 , i); 
	}
	return count;
}

int main()
{
	int t,i,n,count,temp,j;
	printf("Enter no. of test cases");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		temp = R1(n);
		count = temp;
		for (j = 0; i < temp; j++)
		{	temp -= 1;
			count += temp; 
		}
		printf("%d\n",count);
	}
	return 0;
}