/* Write a C program to search a number from double circular linked list. */

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node //node structure
{
	int data;
	struct node *next;
	struct node *prev;
}*start=NULL;

void create()  //creates the list
{
	struct node *tmp, *q;
	tmp=(struct node *)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d",&tmp->data);
	if(start==NULL)
	{
		tmp->prev=NULL;
		tmp->next=NULL;
		start=tmp;
	}
	else
	{
		q=start;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=tmp;
		tmp->prev=q;
		tmp->next=NULL;
	}
}

void search() //search for a node
{
	struct node *q;
	int x,flag=0;
	printf("Enter the data you want to search: ");
	scanf("%d",&x);
	q=start;
	while(q!=NULL)
	{
		if(q->data==x)
		{
			flag=1;
			break;
		}
		q=q->next;
	}
	if(flag)
	{
		printf("Data found in the list.\n");
	}
	else
	{
		printf("Data not found in the list.\n");
	}
}

void display() //display node data
{
	struct node *q;
	if(start==NULL)
	{
		printf("No node present.\n");
		return ;
	}
	q=start;
	printf("The nodes are:\n");
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("1. Add node data to the list\n2. Search for a node\n3. Display\n4. Exit\nYour choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				search();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Option!\n");
		}
	}
}

/*OUTPUT : 
	1. Add node data to the list
	2. Search for a node
	3. Display
	4. Exit
	Your choice: 1
	Enter the data: 25
	1. Add node data to the list
	2. Search for a node
	3. Display
	4. Exit
	Your choice: 1
	Enter the data: 30
	1. Add node data to the list
	2. Search for a node
	3. Display
	4. Exit
	Your choice: 1
	Enter the data: 35
	1. Add node data to the list
	2. Search for a node
	3. Display
	4. Exit
	Your choice: 1
	Enter the data: 40
	1. Add node data to the list
	2. Search for a node
	3. Display
	4. Exit
	Your choice: 2
	Enter the data you want to search: 40
	Data found in the list.
*/
