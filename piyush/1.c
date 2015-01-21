#include<stdio.h>

int main()
{
	int n,i,j;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int A[n];
	printf("Enter the elements of array\n");
		for(i=0;i<n;i++)
			{
			scanf("%d",&A[i]);
			}
		if(n%2==0)
		{
		j=n/2 + 1;
		for(i=n/2;i>0;i--)
			{
			
			if(A[i-1]!=A[j-1])
				{
				printf("Number is not ..");
				}
		//	else continue;	
			j++;
			}
		}
		else
		{
		j=(n/2) + 2;
		 for(i=n/2;i>0;i--)
                        {
               	//printf("\n%d %d %d %d ",i,j,A[i-1],A[j-1]); 
                      if(A[i-1]!=A[j-1])
                                {
                               printf("Number is not ..");
                                }
			j++;
                        }
		}
	return 0;
}
