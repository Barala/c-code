    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
     
     
    int main()
    {
    char str[100000];
    long mid,length,t,i,j,flag1,flag2,flag3;
    scanf("%ld",&t);
    while(t--)
    {	
    flag1=0;
    flag2=0;
    flag3=0;
    scanf("%s",str);
    length = strlen(str);
    mid = length/2;
	j=length-1;
    for(i=0;i<mid;)
    {	//printf("%c %c\n",str[i],str[j]);
    if(str[i]==str[j])
    {i++;j--;}
    else {flag1++; j--;}
    if(flag1 >= 2)
    {
    flag3++;
    break;
    }
    }
    i=0;
    for(j=length-1;j>=mid;)
    {	//printf("%c %c\n",str[i],str[j]);
    if(str[i]==str[j])
    {i++;j--;}
    else {flag2++; i++;}
    if(flag2 >= 2)
    {
    flag3++;
    break;
    }
    }	
    if(flag3 < 2) printf("YES\n");
    else printf("NO\n");
    }
    return 0;
}
