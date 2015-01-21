#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int DataTop(int *x, int *t)
{
	int y = *t;
	if(y==-1){ printf("Error!! Stack underflow"); return 0;}
	 else return x[y] ;
}
void IsEmpty(int *x, int *t)
{
	int y =*t;
	if(x[y]==-1) printf("Empty");
	else printf("not Empty");
}

void push(int a, int *x, int *t)
{
	int y = *t; 
        x[y+1]=a;
	*t+=1;
//	printf("%d\n",x[y+1]);
//	printf("%d\n",top);

}

int  pop(int *x, int *t){
	int y = *t;
	printf("%d",y);
	*t-=1;
	return x[y];
}

int main()
{
	char input[100];
	printf("Eneter a string");
	scanf("%s",input);
	int i,length=0,count=0,flag1=0,flag2=0,flag3=0;
	length = strlen(input);
	if(isdigit(input[0])&&isdigit(input[length-1]))
	{
	for(i=0;i<length;i++)
	{	
		if(isdigit(input[i]) || input[i]=='*' || input[i]=='-' || input[i]=='+' || input[i]=='/')
		{
			if(input[i]=='*' || input[i]=='-' || input[i]=='+' || input[i]=='/') count++;
			else count=0;
			//printf("Well formated");
		}
		else flag1=1;
		if(count==2) 
		{
			flag2=1;
			 break;
		}
		else continue;
	}
	}
	else flag3=1;
	
	if(flag1==1 || flag2==1 || flag3==1)
	{
	printf("Enter well formated string\n");
	}
	else
	{
	int x[5]={1,2,3,4,5};
	int *t,top=-1;
	t=&top;
	//int top[1]={-1};
//	printf("%d",top);
	push(44, x, t);
//	 pop(x,t);
//	printf("%d",top);
	printf("%d\n", pop(x,t));
	//printf("%s",input);
	push(55,x,t);
//	printf("%d\n", pop(x,t));
	IsEmpty(x,t);
	printf("%d\n",DataTop(x,t));
	return 0;
	}
	}
