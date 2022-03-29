#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int roll;
	struct Student *link;
};
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
struct Student * Add_last(struct Student *ptr)
{
	struct Student *newnode=NULL,*temp;
	newnode=malloc(sizeof(struct Student));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{
		printf("enter the roll\n");
		scanf("%d",&newnode->roll);
		if(ptr==NULL) 
		{
			ptr=newnode;
		}
		else
		{
			temp=ptr;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			temp->link=newnode;
		}
	}
	return ptr;
}
struct Student * randominsert(struct Student *ptr)  
{
	int i,pos;   
	struct Student *newnode, *temp;  
	newnode=(struct Student *)malloc(sizeof(struct Student));  
	if(newnode==NULL)  
	{  
		printf("node not created\n");  
	}  
	else  				        
	{
		printf("Enter element value\n");  
		scanf("%d",&newnode->roll);  
		printf("enter the location after which you want to insert ");  
		scanf("%d",&pos);  
		temp=ptr;  
		for(i=1;i<pos;i++)  
		{  
			temp=temp->link;  
			if(temp==NULL)  
			{  
				printf("cant insert\n");    
			}  		
		}  
		newnode->link = temp ->link;   
		temp ->link=newnode;     
	}
	return ptr;	
}  
int main()
{
	struct Student *head=NULL;
	int choice;
	while(1)
	{
		printf("1. Add_last 2.Display 3.randominsert 4.exit\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=Add_last(head);
				break;
			case 2: Display(head);
				break;
			case 3:head=randominsert(head);
			       break;
			case 4:exit(0);
		}
	}
}

