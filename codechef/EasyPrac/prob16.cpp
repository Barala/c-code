#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n];
		
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		if(n==1)
		{
			cout<<a[0]<<" "<<1<<endl;
		}
		else
		{
			sort(a,a+n);
			int max=1,count=1,key;
			for(i=0;i<n-1;i++)
			{
				if(a[i]==a[i+1])
				{
					count++;
					if(max<count)
						max=count;
				}
				else
					count = 1;
			}
			count=1;
			for(i=0;i<n-1;i++)
			{
				if(max==1)
				{
					key=a[0];
					break;
				}
				else if(a[i]==a[i+1])
				{
					count++;
					if(count == max)
					{
						key=a[i];
						break;
					}
				}
				else
					count = 1;
			}
			cout<<key<<" "<<max<<endl;
		}
	}
	return 0;
}