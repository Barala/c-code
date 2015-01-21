#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

long fombinational(int n)
{	
	int i;
	long result=1;
	if(n<2)
		return -1;
	for(i=1;i<=n;i++)
			result=result*pow(i, i);
	return result;	
}

long modifiedFombinational(int n, int r)
{
	int i;
	long result=1;
	if(n<r+2)
		return -1;
	for(i=0;i<r;i++)
		result = result*pow(n-i, n-i);
	return result;
}

int main()
{
	int N,M,Q,R;
	long result,t;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%d %d %d",&N,&M,&Q);
		while(Q--)
		{
			scanf("%d",&R);
			if(R>=N-R)
				result = modifiedFombinational(N,N-R)/fombinational(N-R);
			else
				result = modifiedFombinational(N,R)/fombinational(R);
			printf("%ld\n",result%M);
		} 
	}
	return 0;
}