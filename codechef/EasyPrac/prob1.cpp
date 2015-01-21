# include <bits/stdc++.h>

using namspace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,money;
		int i,j,sum,flag=0;

		cin>>n>>money;
		
		int a[n];

		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		for(i=0;i<n;i++)
		{
			sum=0;
			for(j=0;j<n;j++)
			{
				if(i&(1<<j)>0)
					sum = sum+a[j];
			}
			if(sum==money)
			{
				cout<<"Yes"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"No"<	

	}
	return 0;
}