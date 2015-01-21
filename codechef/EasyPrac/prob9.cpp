#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n=0,i,key,flag;
	cin>>n;
	while(n!=0)
	{
		int a[n];
		flag=0;
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);

		for(i=1;i<=n;i++)
		{
			key = a[i];
			if(a[key]!=i)
				flag=1;			
		}
		(flag==0) ? cout<<"ambiguous"<<endl : cout<<"not ambiguous"<<endl;
		scanf("%d",&n);
	}
	return 0;
}