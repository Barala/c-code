#include <stdio.h>
#define size 7

void bubbleSort(int array[])
{
	int i,j,count=0,temp,flag=0,n;
	n=size-1;
	while(1)
	{	count =0;
		for(i=0;i<n;i++)
		{
			if(array[i] > array[i+1])
			{
				temp = array[i+1];
				array[i+1] = array[i];
				array[i] = temp;
				count++;
			}
			flag++;
		}
		n--;
		if(count==0)
			break;
	}
	printf("%d\n", flag);
	return;
} 

int main()
{
	int i,array[size] = {64, 34, 25, 12, 22, 11, 90};
	bubbleSort(array);

	printf("Sorted array of {3,8,8,4,7,2}\n");
	for (i = 0; i < size; ++i)
	{
		printf("%d ",array[i]);
	}
	return 0;
}