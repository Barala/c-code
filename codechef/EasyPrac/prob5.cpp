# include <bits/stdc++.h>

using namespace std;

long result[100] = {0};

long fact(int n)
{
	if(n==0 || n==1)
		return 1;
	else
	{
		if(result[n]!=0)
			return result[n];
		else
			return result[n] = (n*fact(n-1));
	}
}
int main()
{
	int t,n;
	cin>>t;
	while(t-->0)
	{
		cin>>n;
		cout<<fact(n)<<endl;
	}
	return 0;
}