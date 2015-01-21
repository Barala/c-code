#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,current;
		long k,max=0,i;
		scanf("%ld %ld",&n,&k);
		long A[n],B[n];

		for(i=0;i<n;i++)
			scanf("%ld",&A[i]);

		for(i=0;i<n;i++)
			scanf("%ld",&B[i]);

		for(i=0;i<n;i++)
		{
			current = (k/A[i])*B[i];
			if(current>max)
				max=current;
		}
		printf("%ld\n",max);
	}
	return 0;
}