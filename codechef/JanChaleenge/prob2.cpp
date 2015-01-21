#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,i;
		scanf("%d %d",&n,&q);

		int a[n];

		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);

			while(q--)
			{
				int q1,q2,size,count=0,j,key;
				scanf("%d %d",&q1, &q2);
				size=n-1-(q2-q1);
				int b[size];
				j=0;
				for(i=1;i<=n;i++)
				{	
					if(i<q1 || i>q2)
					{
						b[j]=a[i];
						j++;
					}
				}
				

				sort(b,b+size);
								
				for(i=b[0];i>0;i--)
				{
					count=0;
					for(j=0;j<size;j++)
					{
						if(b[j]%i == 0)
							count++;
					}
					if(count==size)
						break;
				}
				cout<<i<<endl;
				
			}
	}
	return 0;
}