#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,i=0,size;
	cin>>t;
	int a[t];
	size=t;
	while(t-- > 0)
	{
		scanf("%d",&a[i]);
		i++;
	}
	
	sort(a, a + size);
	
	for(i=0;i<size;i++)
		printf("%d\n", a[i]);

	return 0;
}