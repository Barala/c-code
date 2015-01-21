#include<stdio.h>
#include<stdlib.h>



int main()
{
	int tc,i,j,k,size,l,key;
	printf("Enter the total no. of test cases\n");
	scanf("%d",&tc);
	int T[tc];
	for(i=0;i<tc;i++)
	{
		printf("Enter the size of %d test case\n",i+1);
		scanf("%d",&size);
		int A[size];
		for(j=0;j<size;j++)
		{
			scanf("%d",&A[j]);
		}
		for(k=0;k<size;k++)
			{
			for(l=0;l<size;l++)
				{
					if(A[k]<=A[l])
						{
							key = A[k];
							A[k]=A[l];
							A[l]=key;
						}
				}
			}
		for(j=0;j<size;j++)
		{
			if(j%2!=0)
			{
			key=A[j+1];
			A[j+1]=A[j];
			A[j]=key;
			}
		}
		for(j=0;j<size;j++)
		{
			printf(" %d ",A[j]);
		}
	}
return 0;
}
