# include <bits/stdc++.h>

using namespace std;

int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,min,i,j;
		int count;
		cin>>n;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=a[i];
		}
		sort(b,b+n);
		if(b[0]!=0)
			min = b[0];
		else
			min =1;
		
		for(j=min;j>0;j--)
		{
			count=0;
			for(i=0;i<n;i++)
			{
				if(a[i]%j==0)
					count++;
			}
			if(count==n)
				break;
		}
		for(i=0;i<n;i++)
		{
			cout<<(a[i]/j);
			if((i+1)!=n)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}