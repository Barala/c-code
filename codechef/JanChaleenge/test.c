    #include<stdio.h>
     
    int main()
    {
    int t;
    int k,arrk[100001];
    long long n, sumn, sumk, maxno;
    int flag,i,j;
    scanf("%d",&t);
    while(t--)
    {
    sumk = 0; sumn = 0; flag = 0;
    scanf("%lld%d",&n,&k);
    for(i=0;i<k;i++)
    {
    int x;
    scanf("%d",&x);
    j = i-1;
    while(j>=0 && arrk[j] > x)
    {
    arrk[j+1] = arrk[j];
    j--;
    }
    arrk[j+1] = x;
    }
    for(i=0;i<k;i++)
    {
    if(!flag)
    {
    sumn = arrk[i]*((long long)arrk[i]-1)/2 - sumk;
    sumk += arrk[i];
    }
    if(arrk[i] > sumn && !flag)
    {
    flag = 1;
    maxno = arrk[i];
    }
    }
    if(k == 0 || !flag)
    {
    maxno = n*(n+1)/2 - sumk + 1;
    }
    if(maxno%2)
    {
    printf("Chef\n");
    }
    else
    printf("Mom\n");
    }
    return 0;
    }

