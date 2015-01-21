#include <bits/stdc++.h>

using namespace std;

int main()
{
	long n,k;
	scanf("%ld %ld",&n, &k);
	long i,count=0,R;
	for(i=0;i<n;i++)
	{
		scanf("%ld",&R);
		if(R%k==0)
			count++;
	}
	printf("%ld\n",count);
	return 0;
}