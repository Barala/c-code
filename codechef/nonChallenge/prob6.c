#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long A[100000];

long modifiedSum(long L,long R)
{
	long sum=0,i;
	for(i=L-1;i<R;i++)
		sum += A[i];
		return sum;
}


int main()
{
	long N,Q,L,R,x,y,result=0,i,j,k,m;
	scanf("%ld",&N);
	long S[N],LL[N],RR[N];
	int q;
	for(i=0;i<N;i++)
		scanf("%ld",&A[i]);
	for(j=0;j<N;j++)
		scanf("%ld %ld",&LL[j],&RR[j]);
	
	scanf("%ld",&Q);
	for(k=0;k<Q;k++)
	{
		result = 0;
		scanf("%d",&q);
		if(q==1)
		{
			scanf("%ld %ld",&x,&y);
			A[x-1] = y;
		}
		for(j=0;j<N;j++)
		{
			L=LL[j];
			R=RR[j];
			S[j] = modifiedSum(L,R);
		}
		if(q==2)
		{
			scanf("%ld %ld",&L,&R);
			for(m=L-1;m<R;m++)
			{
				result += S[m];
			}		
			printf("%ld\n",result);
		}	
	}

	return 0;
}