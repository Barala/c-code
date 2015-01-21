#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N,i,j,count =0;
		cin>>N;
		int P[N], R[N];
		for(i=0;i<N;i++)
			scanf("%d",&P[i]);
		for(i=0;i<N;i++)
			scanf("%d",&R[i]);
		sort(P,P+N);
		sort(R,R+N);
		j=N-1;
		for(i=N-1;i>=0;i--)
		{
			if(P[i]<=R[j])
			{
				j--;
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}