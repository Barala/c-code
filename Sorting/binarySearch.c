# include <stdio.h>

int binarySearch(int array[], int l, int r, int x)
{
	if(r>=l)
	{
		int mid;
		mid = l + (r-l)/2 ;

		if(array[mid] == x) return mid;

		if(array[mid] > x) return binarySearch(array, l, mid-1, x);

		return binarySearch(array, mid+1, r, x);		

	}
	return -1;
}


int main()
{
	int array[6] = {2,34,45,66,78};
	printf("%d\n",array[binarySearch(array, 0, 5, 78)]);
	printf("%d\n",array[binarySearch(array, 0, 5, 45)]);
	printf("%d\n",array[binarySearch(array, 0, 5, 78)]);
	return 0;
}