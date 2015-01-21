#include<stdio.h>
#include<stdlib.h>

struct linked_list
{
int number;
struct linked_list *next;
};

typedef struct linked_list node;

int main()
{
	node *head;
	void create(node *p);
	int count(node *p);
	void print(node *p);
	void pop(node *p);
	head=(node*)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
	printf("\n Number of items = %d \n", count(head));
	printf("\n");
	print(head);
	return 0;
}

void create(node *list)
{
	printf("Input a number");
	printf("(type -999 at end)");
	scanf("%d",&list->number);
	
	if(list->number == -999) list->next = NULL;
	else
		{	
		list->next = (node*)malloc(sizeof(node));
		create(list->next);
		}
	return;
}

void print(node *list)
{
	if(list->next != NULL)
	{	
		printf("%d-->",list->number);
		if(list->next->next == NULL)
		{
			printf("%d",list->next->number);
		}
	print(list->next);
	}
return;
}

int count(node *list)
{
	if(list->next==NULL)
	{	
		return (0);
	}
	else return (1+ count(list->next));
}
void pop(node *list)
{
	if(list->next==NULL)
	{
	printf("empty stack");
	}
	if(list->next->next==NULL)
	{
	list->next=NULL;
//	pop(list->next);
	
	}
}
