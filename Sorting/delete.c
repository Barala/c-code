#include <stdio.h>

void merge(int *left, int *right, int *array, int nL, int nR)
{
  int i=0,j=0,k=0;

  while(i<nL && j<nR)
  {
    if (left[i]<right[j])
    {
      array[k] = left[i];
      i++;
    }
    else
    {
      array[k] = right[j];
      j++;
    }
    k++;
  }
  while(i<nL)
  {
    array[k] = left[i];
    i++;
    k++;
  }
  while(j<nR)
  {
    array[k] = right[j];
    j++;
    k++;
  }

}

void mergeSort(int *array, int n)
{
  int i,mid=n/2, *left, *right;

  left = (int*)malloc(mid*sizeof(int));
  right = (int*)malloc((n-mid)*sizeof(int));

  if (n<2)
    return;
  for (i = 0; i < mid; i++)
  {
    left[i] = array[i];
  }
  for (i = mid; i < n; i++)
  {
    right[i-mid] = array[i];
  }
  mergeSort(left,mid);
  mergeSort(right,n-mid);
  merge(left, right, array, mid, n-mid);
}

int main()
{

  int t,i;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    int A[n];
    for (i = 0; i < n; ++i)
    {
        scanf("%d",&A[i]);
    }
    mergeSort(A,n);
    
  }
    return 0;
}
