# include <bits/stdc++.h>

using namespace std;

int main()
{
	int T,i,count=0;
	cin>>T;
	while(T-->0)
	{
		count=0;
		char str[100];
		cin>>str;
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i] == 'A' || str[i] == 'D' || str[i] == 'O' || str[i] == 'P' || str[i] == 'Q' || str[i] == 'R')
				count += 1;
			else if(str[i]=='B')
				count += 2;
		}
		cout<<count<<endl;
	}
	return 0;
}