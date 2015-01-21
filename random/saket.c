#include <stdio.h>
#include <stdlib.h>

int main() 
{
	
	int i,j,n,k;
	printf("Please Enter the value of height in integer\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	    for(j=1;j<2*(n-i);j++)
	    {
	        if(j%2==0)
	            {
	                    printf("X");
	            }
	        else
	            {
	                    printf("*");
	            }
   	   }
	printf(" \n"); 
	  for(k=0;k<i+1;k++)
	    {		if(i==n-1) break;
			else printf("v");
	    }  
      }
	   	
	return 0;
}
