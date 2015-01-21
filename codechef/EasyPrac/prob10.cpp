#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,max=0,count=0,i,k;
	long n;
	cin>>t;
	while(t-- >0)
	{	
		scanf("%ld",&n);
		
		(n&1)? cout<<"BOB"<<endl : cout<<"ALICE"<<endl ;
	}
	return 0;
}