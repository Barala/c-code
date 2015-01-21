/*
#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long Array[40];
	long long i=0,j=0,k,X,t;
	double result;
	Array[0]=1;
	scanf("%lld",&t);
	while(i++<40)
		Array[i]=2*Array[i-1];
	while(t--)
	{
		scanf("%lld %lld",&X,&k);
		while(k>=Array[j])
			j++;
		j--;
		result = ((double)X/Array[j])*(k-Array[j]) + (double)X/Array[j+1] ;
		printf("%6lf\n",result);
	}	
	
	return 0;
}
*/
#include <bits/stdc++.h>

using namespace std;

long long temp[40];

int main(){
temp[0] = 1;
long long test_cases,r,X,K,i=0,j=0;
double result;
scanf("%lld",&test_cases);
while(i++<40)
temp[i] = 2*temp[i-1];

while(test_cases--)
{
	scanf("%lld %lld",&X,&K);
	while(K>=temp[j])
		j++;
	j--;
	r = K-temp[j];
	result = ((double)X/temp[j])*r + (double)X/temp[j+1];
	printf("%6lf\n",result);
}
return 0;
}