#include <bits/stdc++.h>

using namespace std;
int main()
{
	map<int,int> my_map;
	map<int,int>::iterator iterator_name; 
	int i=0, a[14] = {3,5,6,8,8,93,2,2,5,7,3,1,3,2};
	
	sort(a,a+14);
	
	while(i++<14)
	{
		printf("%d\n",a[i-1]);
		my_map[a[i-1]]++;
	}
	//iterator of my map
	iterator_name = my_map.begin();
	while(iterator_name!=my_map.end())
	{
		if((iterator_name->second)%2 == 1)
			printf("%d %d\n",iterator_name->first, iterator_name->second);
		iterator_name++;
	}

	
	return 0;

}
