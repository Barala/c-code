#include <stdio.h>

# define size 6


void insertionSort(int array[])
{
	int i, j , key;
	for (i = 1; i < size; ++i)
	{
		key = array[i];
		j=i-1;
		while(j>=0 && array[j] > key)
		{
			array[j+1] = array[j];
			j = j-1;
		}
		array[j+1] = key;
	}
	return;
}

int main()
{
	int i,array[size] = {3,8,8,4,7,2};
	insertionSort(array);

	printf("Sorted array of {3,8,8,4,7,2}\n");
	for (i = 0; i < size; ++i)
	{
		printf("%d ",array[i]);
	}
	return 0;
}