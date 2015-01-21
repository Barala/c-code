#include <bits/stdc++.h>

using namespace std;

unsigned long int arr[] = {70207,70507,70607,71317,71917,72227,72727,73037,73237,73637,74047,74747,75557,76367,76667,77377,77477,77977,78487,78787,78887,79397,79697,79997,90709,91019,93139,93239,93739,94049,94349,94649,94849,94949,95959,96269,96469,96769,97379,97579,97879,98389,98689,1003001};

int palindrome(int n)
{
	int i,count=0,k,flag=0,l;
	l=n;
	int a[100];
	for(i=0;i<1000000;i++)
	{
		a[i] = n%10;
		n = n/10;
		count++;
		if(n==0)
			break;
	}
	k=count-1;
	for(i=0;i<count;i++)
	{
		//printf("%d %d\n",a[i], a[k]);
		if(a[i]==a[k])
		{
			flag++;
		}
		k--;
	}
	if(flag==count)
		return l;
	else
		return 0;

}

int func(int n)
{
	int i,j,flag,k,result;
	i=n;
	while(1)
	{
		k=i/2;
		flag=0;
		for(j=2;j<k;j++)
		{
			if(i%j == 0)
				flag++;
		}
		if(flag==0)
		{
			if(palindrome(i)!=0)
			{
				result = palindrome(i);
				break;
			}
		}
		i++;
	}
	return result;
}

int main()
{
	int n,i=0;

	cin>>n;
		//func();
	//sort(array,array+t);
	if(n>39293)
	{
		while(1)
		{
			if(arr[i]>=n)
			{
				cout<<arr[i]<<endl;
				break;
			}
			i++;
		}
	}
	else
		cout<<func(n)<<endl;
	return 0;
}