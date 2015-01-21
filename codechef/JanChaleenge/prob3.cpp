#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,sum=0,count=0;
		cin>>n;
		int a[n];

		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum += a[i];
			if(a[i]==0)
				count++;
		}

		if(sum>=100 && sum-(n-count) <100)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}