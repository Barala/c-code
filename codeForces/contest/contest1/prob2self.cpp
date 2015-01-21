#include <iostream>
#include <bits/stdc++.h>

using namespace std;
map<int,int> my_map;

int main()
{
    int n,m,num,flag,count=0;
    scanf("%d",&n);
    int i=0,j=0;
    while(i++<n)
    {
        scanf("%d",&num);
        my_map[num]++;
    }
    scanf("%d",&m);
    int G[m];
    while(j++<m)
        scanf("%d",&G[j-1]);
    sort(G,G+m);
    i=0;
    while(i++<m)
    {
    flag = 0;
    if (my_map[G[i-1]-1])
    {
        flag = 1;
        my_map[G[i-1]-1]--;
    }
    if (my_map[G[i-1]] && !flag)
    {
        flag = 1;
        my_map[G[i-1]]--;
    }
    if (my_map[G[i-1]+1] && !flag)
    {
    flag = 1 ;
    my_map[G[i-1]+1]--;
    }
    if(flag)
    count++;
    }
    printf("%d\n",count);

    return 0;
}

