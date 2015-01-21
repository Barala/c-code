#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,i,j,length,a,b,count=0,len,len1;
    char s[10000];
    scanf("%d",&T);
    int A[T];
    for(i=0;i<T;i++)
        {
            scanf("%s",s);
            length = strlen(s);
            len1=length/2;
            if(length%2==0)
                {
                for(j=0;j<len1;j++)
                    {
                    len = (length/2 -1);
                    a=s[len-j];
                    b=s[len+(j+1)];
                    if(b>=a)
                    count+=b-a;
                    else count+=a-b;
                   // printf("%d\n",count);
			}
                }
        else
            {count =0;
            for(j=0;j<=len1;j++)
                {
                len = (length/2);
                a=s[len-j];
                b=s[len+j];
                if(b>=a)
                count+=b-a;
                else count+=a-b;
                }
        }
    A[i]=count;
	count=0;
    }
      
    
    for(j=0;j<T;j++)
        {
        printf("%d\n",A[j]);
   }
    
    return 0;
}

