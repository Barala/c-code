#include <stdio.h>

int tribonacci(int n)
{
	if(n>0)
	{
		if(n==1 || n==2 || n==3)
		{	
			return 1;
		}
	//printf("%d\n", tribonacci(n));	
	return (2*tribonacci(n-1) + 4*tribonacci(n-2) + 3*tribonacci(n-3)) ;
	//printf("%d\n", tribonacci(n));
	}
	else
		return 0;
}





int main()
{
	printf("Enter the number\n");
	int n;
	scanf("%d",&n);
	tribonacci(n);
	printf("%d\n",tribonacci(n));
	return 0;
}