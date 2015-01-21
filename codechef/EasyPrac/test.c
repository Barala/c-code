    #include<stdio.h>
     
    int main()
    {
    unsigned int t;
    scanf("%d",&t);
    while(t--)
    {
    unsigned int n;
    unsigned int min=1000000;
    unsigned int i;
    scanf("%d",&n);
    unsigned int arr[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    if(arr[i]<min)
    {
    min=arr[i];
    }
    }
    int flag=0;
    for(i=0;i<n;i++)	
    {
    if((arr[i]%min)==0)
    {
    continue;
    }
    else
    {
    flag=1;
    }	
    }
    if(!flag)
    {
    for(i=0;i<n;i++)
    {
    printf("%d",arr[i]/min); if((i+1)!=n)
    printf(" ");
    }
    printf("\n");
    }
    else
    {
    for(i=0;i<n;i++)
    {
    printf("%d",arr[i]);
    if((i+1)!=n)
    printf(" ");
    }	
    printf("\n");
    }
    }
    return 0;
    } 

