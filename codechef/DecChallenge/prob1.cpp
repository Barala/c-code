#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,i=0;
	cin>>t;
	while(t-->0)
	{
		map<long,int> my_map;
		long n;
		scanf("%ld",&n);
		while(n-->0)
		{
			long a;
			scanf("%ld",&a);
			my_map[a]++;
		}
		printf("%ld\n",my_map.size());
	}
	return 0;
}