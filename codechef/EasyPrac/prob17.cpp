# include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,money,i,j;
		cin>>n>>money;
		int a[n],sum=0,flag=0;

		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		for(i=0;i<pow(2,n);i++)
		{
			sum=0;
			for(j=0;j<n;j++)
			{
				if(i&(1<<j))
					sum += a[j];
			}
			if(sum==money)
			{
				flag=1;
				cout<<"Yes"<<endl;
				break;
			}
		}
		if(flag==0)
			cout<<"No"<<endl;
	}
	return 0;
}