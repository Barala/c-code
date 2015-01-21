#include <stdio.h>
 
int main(void) {
int n,i,j,t,k;
scanf("%d",&k);
while(k>0)
{
scanf("%d",&n);
int mx=0;
for(i=0;i<n;i++)
{
scanf("%d",&t);
if(t>mx)
mx=t;
}
printf("%d\n",mx);
k--;
}
return 0;
}
