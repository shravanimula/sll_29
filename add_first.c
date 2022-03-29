#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int roll;
	struct Student *link;
};
struct Student * Add_first(struct Student *ptr)
{
	struct Student *newnode=NULL;
	newnode=malloc(sizeof(struct Student));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		printf("enter the roll\n");												scanf("%d",&newnode->roll);
		newnode->link=NULL;
		newnode->link=ptr;
		ptr=newnode; 
	}
	return ptr;
}

void Display(struct Student *ptr)
{
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(ptr)
		{
			printf("%d\n",ptr->roll);
			ptr=ptr->link;
		}
	}
}
int main()
{
	struct Student *head=NULL;
	int choice;
	while(1)
	{
		printf("1.Add_first 2. Display 3.exit\n");
		printf("enter ur choice\n");						
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=Add_first(head);
				break;
			case 2: Display(head);
				break;
			case 3:exit(0);
		}
	}
}
