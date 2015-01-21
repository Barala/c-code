#include<stdio.h>

int main()
{
	int n,i=0,j=0,temp=0,k=0,count=0;
	printf("Enter size of your array");
	scanf("%d",&n);
	int A[n];
	printf("Enter Elements of array");

	for(i=0;i<n;i++)
	{	
		scanf("%d",&A[i]);
	}

	for(i=0;i<n;i++)
	{	
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
		        {
                		printf("%d ",A[k]);
        		}
			printf("\n");
			
			count++;
			if(A[i]>=A[j])
			{	
				temp=A[j];
				A[j]=A[i];
				A[i]=temp;	
			}
			else continue;
		
		
		}		
	}
	printf("Sorted array");
	for(i=0;i<n;i++)
        {
                printf("%d ",A[i]);
        }
	printf("\nNo .of loops repeated =   %d",count);

	return 0;
}

