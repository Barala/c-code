#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t-- > 0)
	{
		cin>>n;
		if(n%2 ==0)
			cout<<n<<endl;
		else
			cout<<n-1<<endl;
	}
	return 0;
}