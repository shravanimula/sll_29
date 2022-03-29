#include<stdio.h>
#include<stdlib.h>
struct st
{
	int data;
	struct st *link;
};
struct st * add_first(struct st *ptr)
{
	struct st *newnode=NULL;
	newnode=malloc(sizeof(struct st));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		printf("enter data\n");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		newnode->link=ptr;
		ptr=newnode;
	}
	return ptr;
}
void display(struct st *ptr)
{
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else 
	{
		while(ptr)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->link;
		}
	}
}
struct st * reverse(struct st *ptr)
{
	struct st *prev=NULL,*cur=NULL,*next=NULL;
	if(ptr==NULL)
	{
		printf("list empty\n");
	}
	else if(ptr->link==NULL)
	{
		printf("list is having only one node \n");
	}
	else
	{
		next=ptr;
		while(next)
		{
			prev=cur;
			cur=next;
			next=next->link;
			cur->link=prev;
		}
		ptr=cur;
	}
	return ptr;
}
int main()
{
	struct st *head=NULL;
	int choice;
	while(1)
	{
		printf("1.add_first 2.display 3.reverse 4 exit\n");
		printf("enter ur choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_first(head);
			       break;
			case 2:display(head);
			       break;
			case 3:head=reverse(head);
			       break;
			case 4:exit(0);
		}
	}
}
