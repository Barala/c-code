#include <stdio.h>
#include <stdlib.h>

int list(int A[],int n)
{
	int *l,max=0,i,j;
	l = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		l[i]=1;

	for(i=1;i<n;i++)
		for(j=0;j<i;j++)
			if(A[i]>A[j]&&l[i]<l[j]+1)
				l[i]=l[j]+1;
	for(j=0;j<n;j++)
		if(max<l[j])
			max=l[j];
	return max;
}

int main()
{
	int A[7] ={1,2,0,3,4,5,6};
	printf("%d",list(A,7));
	return 0;
}