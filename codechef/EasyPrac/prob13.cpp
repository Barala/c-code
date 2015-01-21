# include <bits/stdc++.h>

using namespace std;

int main()
{
	long A,B,result;
	scanf("%ld %ld",&A,&B);
	result = A - B;
	if((result+1)%10 == 0)
		cout<<(result-1)<<endl;
	else
		cout<<(result+1)<<endl;

	return 0;
}