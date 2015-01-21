
#include <stdio.h> 

int main() 
{
	int I = 1024,count=0; 
	for (; I; I >>= 1)
	{ 
	printf ("GeeksQuiz\n");
	printf("%d\n",I); 
	count++;
	}
	printf("%d\n %d",count,I);
	return 0;
}
