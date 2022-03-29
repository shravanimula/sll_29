#include<stdio.h>
#include<stdlib.h>
struct st
{
	int data;
	struct st *link;
};
struct st *head=NULL;
void add_first(int num)
{
	struct st* newnode=(struct st *)malloc(sizeof(struct st));
	newnode->data=num;
	newnode->link=head;
	head=newnode;
}
void display(struct st *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->link;
	}
}
int main()
{
	int i,node,temp;
	printf("enter the number of nodes\n");
	scanf("%d",&node);
	printf("ehter the details\n");
	for(i=0;i<node;i++)
	{
		scanf("%d",&temp);
		add_first(temp);
	}
	printf("linked list\n");
	display(head);
}
