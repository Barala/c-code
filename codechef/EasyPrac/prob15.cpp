# include <bits/stdc++.h>

using namespace std;

int func(int n)
{
	int count=0,k=2,i;
	if(n==1)
		return 1;
	else
	{
		while(1)
		{
			k=2;
			if(n==1)
			{
				count++;
				break;
			}
			else if(n==0)
				break;
			else
			{
				for(i=1;i<=10;i++)
				{
					if(n/k==1)
					{
						count++;
						n=n-k;
						break;
					}
					k *= 2;
				}
			}
		}
	}
	return count;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count =0;
		scanf("%d",&n);
		if(n>=2048)
		{
			count = n/2048;
			n= n%2048;
			count += func(n);
		}
		else
			count=func(n);

		cout<<count<<endl;
	}

	return 0;
}