#include <stdio.h>

#define size 6

void selectionSort(int array[])
{
	int i,j,imin,temp;
	for (i = 0; i < size-2; ++i)
	{
		imin = i;
		
		for (j = i+1; j < size; j++)
		{
			if(array[j]<array[i+1])
				imin = j;
		}
	temp = array[i];
	array[i] = array[imin];
	array[imin] = temp;
	}
	return;
}

int main()
{	
	int i,array[size] = {3,8,8,4,7,2};
	selectionSort(array);

	printf("Sorted array of {3,8,8,4,7,2}\n");
	for (i = 0; i < size; ++i)
	{
		printf("%d ",array[i]);
	}
	return 0;
}