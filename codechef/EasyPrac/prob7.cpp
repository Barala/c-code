#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,max1=0,max2=0,p1,p2,win=0,P1=0,P2=0;
	scanf("%d",&t);
	while(t-- > 0)
	{
		scanf("%d %d",&p1,&p2);
		P1 += p1;
		P2 += p2;
		if(P1>=P2 && (P1-P2) >= max1)
			max1 = P1-P2;

		if(P2>P1 && (P2-P1) >= max2)
			max2 = P2-P1;
	}
	if(max2>max1)
	{
		win =2;
		printf("%d %d\n",win, max2);
	}
	else
	{
		win =1;
		printf("%d %d\n",win, max1);
	}
	return 0;
}