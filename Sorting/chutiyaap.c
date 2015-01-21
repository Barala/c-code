//sum prod of elements see exp.txt
#include<stdio.h>
#include<string.h>
int main()
{
char c,tag[50][10],buffer[2000];
int j,i=0,elem=0,sol=0,prod=1,count=0;

while((c=fgetc(stdin))!=EOF)
{
	switch(c){
	case '/':
	case '<':if((c=fgetc(stdin))!='/')
	{
	j=0;
	memset(tag[i],0,10);
	tag[i][j++]=c;
	while((c=fgetc(stdin))!='>')
	{
	tag[i][j++]=c;
	}
	i++;
	}
else
{
	while((c=fgetc(stdin))!='>')	
	{
//temp[j++]=c;
	}
	i--;
}
	break;
	case '\n': break;
	default:elem=c-'0';
	while((c=fgetc(stdin))!='<')
	{
	//printf("C:%c\n",c);
	elem=elem*10+(c-'0');
	//printf("elem:%d\n",elem );
	}
if(strcmp(tag[1],"sum")==0){
	sol+=elem;
//printf("sol:%d\n",sol);
	break;
}
else if(strcmp(tag[1],"prod")==0)
{
prod*=elem; sol=prod; break;
//printf("sol:%d\n",sol);
}
else if(strcmp(tag[1],"div")==0)
{
if(count==0)
{
sol+=elem;
count++;
}
else
sol/=elem;
break;
}else if(strcmp(tag[1],"sub")==0){
if(count==0){
sol+=elem;
count++;
}else
sol-=elem;
break;
}
break;
}
}
printf("%d\n",sol);

return 0;
}

