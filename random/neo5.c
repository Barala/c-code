#include<stdio.h>

int main ()
{
	int n,i,j,k,A[3][3],B[3][3],C[3][3];
	printf("Eneter first matrix");
	for(k=0;k<3;k++)
	{	
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[k][j]);	
		}
	}
	printf("Eneter second matrix");
	 for(k=0;k<3;k++)
        { 
                for(j=0;j<3;j++)
                {
                        scanf("%d",&B[k][j]);
                }
        }

	//Matrix multiplication
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]=0;
			for(k=0;k<3;k++)
			{
				C[i][j] = C[i][j]+A[i][k]*B[k][j];
			}
		}
	}

	printf("Matrix mulltiplication");
	  for(k=0;k<3;k++)
        {
                for(j=0;j<3;j++)
                {
                        printf("%d ",C[k][j]);
                }
        }




	return 0;
}

