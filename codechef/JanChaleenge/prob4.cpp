#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,p,q;
	cin>>t;
	
	while(t--)
	{
		int n=0,count=0;
		scanf("%d",&n);
		map<int, int> range;
		int r1=0,r2=0;
		int rr1=-1000000,rr2=-1000000;
		while(n--)
		{
			scanf("%d %d",&p,&q);
			range.insert(pair<int, int>(p,q));
		}

		for(map<int, int>::iterator i = range.begin();i!=range.end();i++)
		{
			r1=(*i).first;
			r2=(*i).second;
			if(r1<=rr2 && r2<=rr2)
				{
					rr1=r1;
					rr2=r2;
				}
			else if(r1<=rr2 && r2 >=rr2)
				{
					rr1=r1;
					rr2=rr2;
				}
			else
			{
				count++;
				rr1=(*i).first;
				rr2=(*i).second;
			}

		}
		cout<<count<<endl;	
		range.clear();
		}
		return 0;
	}