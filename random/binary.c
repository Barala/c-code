#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j,carry=0;
	printf("\nEnter size of array1 and array2\n");
	scanf("%d",&n);
	int A[n],B[n],C[n];
	printf("Enter the digits for array1\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter for array2\n");
	for(i=0;i<n;i++)
        {
                scanf("%d",&B[i]);
        }
	
	for(i=0;i<n;i++)
	{
		if(A[i]==0&&B[i]==0)
		{
			C[i]=A[i]+B[i]+carry;
			carry=0;
		}
		if((A[i]==0&&B[i]==1)||(A[i]==1&&B[i]==0))
		{
			C[i]=A[i]+B[i]+carry;
			if(C[i]==2)
			{
				C[i]=0;
				carry=1;
			}
		}
		if(A[i]==1&&B[i]==1)
		{
			C[i]=A[i]+B[i]+carry;
			if(C[i]==2)
                        {
                                C[i]=0;
                                carry=1;
                        }
			if(C[i]==3)
                        {
                                C[i]=1;
                                carry=1;
                        }
		}
	}

	printf("Sum of binary digits=\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",C[i]);
	}

	return 0;

}
