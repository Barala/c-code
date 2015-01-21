#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	scanf("%d",&T);
	while(T-->0)
	{
		int n,count=0;
		scanf("%d",&n);
		while(n>0)
		{
			n=n/5;
			count=count+n;
		}
		printf("%d\n",count);
	}
	return 0;
}