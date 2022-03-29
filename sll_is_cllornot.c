#include <stdio.h>
#include <stdlib.h>
struct stu
{
	int data;
	struct stu *link; 
};
struct stu *head=NULL;
void create_list();
void Display();
int main()
{
	int choice;
	while(1)
	{
		printf("enter ur choice\n");
		printf("1. list 2.Display 3.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create_list();
				break;
			case 2: Display();
				break;
			case 3:exit(0);
		}
	}
}
void create_list()
{
	struct stu *newnode,*temp=NULL;
	int i,len;
	printf("Enter the length of the linked list: \n");
	scanf("%d",&len);
	for(i=1;i<=len;i++)
	{
		newnode=(struct stu *)malloc(sizeof(struct stu));
		printf("Enter elements in a list: ");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->link=newnode;
			temp=newnode;
		}
		temp->link=head;

	}  
	if(head==head)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}
void Display()
{
	struct stu *ptr=NULL;
	ptr=head;
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while((ptr->link)!=head)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->link;
		}
		printf("%d\n",ptr->data);
	}
}
