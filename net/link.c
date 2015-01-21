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
//	typedef struct linked_list node;
	void create(node *p);
	void print(node *p);
	void fun1(node *p);
	node *head;
	
	head = (node*)malloc(sizeof(node));
	create(head);
	print(head);
	fun1(head);
	return 0;
}

void create(node *list)
{
	printf("Enter an integer (at end enter -999) ");
	scanf("%d",&list->number);
	if(list->number != -999)
		{
			list->next = (node*)malloc(sizeof(node));
			create(list->next);
		}
	else list->next = NULL;
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
}
void fun1(node* head)
{
  if(head == NULL)
    return;
  
  fun1(head->next);
	  printf("%d  ", head->number);
//	  fun1(head->next);
}

node *insert(node *head)
