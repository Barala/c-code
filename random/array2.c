#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i=0,t,k;
	scanf("%d",&n);
	char name[n+1];
	char ch = getchar();
	for(i=0;i<n;i++)
	{
		 ch = getchar();
		 name[i] = ch;
		 ch = getchar();
	
	}
	name[i]='\0';
	printf("Enter value of t");
	scanf("%d",&t);
	int test[t];
	printf("Enter value of test cases");

		for(i=0;i<t;i++)
		{
			scanf("%d",&test[i]);
		}

	for(i=0;i<t;i++)
	{
	k=test[i];
	printf(" %d %c ", k, name[k]);
	if((name[k] >= '0')&&(name[k]<='9'))
	printf("No\n");
	else
	printf("Yes\n");
	}
return 0;
}
