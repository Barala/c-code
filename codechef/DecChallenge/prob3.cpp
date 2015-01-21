#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int T;
	scanf("%d",&T);
	while(T-- > 0)
	{
		long N,K;
		scanf("%ld %ld",&N ,&K);
		long A[N],i;
		long long sum=0;
		for(i=0;i<N;i++)
		{
			scanf("%ld",&A[i]);
			sum += A[i];
		}
		if(sum%K == 0)
			printf("yes\n");
		else
			printf("no\n");
 	}
	return 0;
}