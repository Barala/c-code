#include <bits/stdc++.h>

using namespace std;

int arr[100001];
int main()
{
	int t;
	cin>>t;
	long long n,sumn,sumk,key;
	int k,x,flag,i,j;
	while(t--)
	{
		sumk =0,sumn=0,flag=0;
		scanf("%lld %d",&n,&k);
		for(i=0;i<k;i++)
		{
			scanf("%d",&x);
			j=i-1;
			while(j>=0&&arr[j]>x)
			{
				arr[j+1] = arr[j];
				j--;
			}
			arr[j+1]=x;
		}

		for(i=0;i<k;i++)
		{
			if(!flag)
			{
				sumn = arr[i]*((long long)arr[i]-1)/2 - sumk;
				sumk += arr[i];
			}
			if(arr[i]>sumn && !flag)
			{
				flag=1;
				key = arr[i];
			}
		}
		if(k==0 || !flag)
		{
			key = n*((long long)n +1)/2 - sumk +1;
		}
		if(key%2)
			cout<<"Chef"<<endl;
		else
			cout<<"Mom"<<endl;
	}
	
	return 0;
}