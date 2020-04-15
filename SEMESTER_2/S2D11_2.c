/* Write a C program to  search a number from singly circular linked list. */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node //node structure
{
	int data;
	struct node *next;
}*last=NULL;

void create() //creates the list
{
	struct node *tmp, *q;
	tmp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&tmp->data);
	
	if(last==NULL)
	{
		tmp->next=tmp;
		last=tmp;
	}
	else
	{
		q=last->next;
		do
		{
			q=q->next;
		}while(q!=last->next->next);
		tmp->next = q->next;
		q->next = tmp;
		last = tmp;
	}
}

void search() //searches for a value
{
	struct node *q;
	int x,flag=0;
	printf("Enter the data you want to search: ");
	scanf("%d",&x);
	q=last->next;
	do
	{
		if(q->data == x)
		{
			flag=1;
			break;
		}
		q=q->next;
	}while(q!=last->next);
	if(flag)
	{
		printf("Data found in the list.\n");
	}
	else
	{
		printf("Data not found in the list.\n");
	}
}

void display() //Displays the whole list
{
	struct node *q;
	if(last==NULL)
	{
		printf("No node present.\n");
		return ;
	}
	q=last->next;
	printf("The nodes are:\n");
	do
	{
		printf("%d\n",q->data);
		q=q->next;
	}while(q!=last->next);
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
