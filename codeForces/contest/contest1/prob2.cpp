
#include <bits/stdc++.h>
using namespace std;
map <int,int> my_map;
int main()
{
    int m,n,i=0;
    scanf("%d",&m);
    int arr[m];
    while(i++<m)
        scanf("%d",&arr[i-1]);
    scanf("%d",&n);
    int num; i=0;
    while(i++<n)
    {
        scanf("%d",&num); 
        my_map[num]++;
    }
    int count=0;
    int flag;
    i=0;
    sort(arr,arr+m);
    while(i++<m)
    {
    flag = 0;
    if (my_map[arr[i-1]-1])
    {
        flag = 1;
        my_map[arr[i-1]-1]--;
    }
    if (my_map[arr[i-1]] && !flag)
    {
        flag = 1;
        my_map[arr[i-1]]--;
    }
    if (my_map[arr[i-1]+1] && !flag)
    {
    flag = 1 ;
    my_map[arr[i-1]+1]--;
    }
    if(flag)
    count++;
    }
    printf("%d\n",count);
    return 0;
}
