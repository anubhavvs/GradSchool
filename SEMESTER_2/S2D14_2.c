/* Write a C program to implements the basic operation of queue using single linked list. */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*start=NULL;

void insert()
{
    struct node *q, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&tmp->data);
	if(start==NULL)
	{
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
    	tmp->next=NULL;
	}
}

void delete()
{
	struct node *tmp;
	if(start==NULL)
	{
		printf("No node present.\n");
	}
	tmp=start;
	start=start->next;
	printf("%d is deleted.\n",tmp->data);
	free(tmp);
}

void display()
{
    struct node *q;
	if(start==NULL)
	{
		printf("Queue is empty.Nothing to display.\n");
		return ;
	}
	q=start;
	printf("The queue is:\n");
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
}

void count()
{
    int count=0;
    struct node *q;
	if(start==NULL)
	{
		printf("Queue is empty.Nothing to count.\n");
		return ;
	}
	q=start;
	while(q!=NULL)
	{
		count++;
		q=q->next;
	}
	printf("Number of Nodes: %d\n",count);
}

int main()
{
	int ch;
	while(1)
	{
		printf("1. Insert\n2. Delete\n3. Display\n4. Count\n5. Exit\nYour choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				count();
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid option.\n");
				break;
		}
	}
	return 0;
}

/* OUTPUT:
	1. Insert
	2. Delete
	3. Display
	4. Count
	5. Exit
	Your choice: 1
	Enter the data: 20
	1. Insert
	2. Delete
	3. Display
	4. Count
	5. Exit
	Your choice: 1
	Enter the data: 25
	1. Insert
	2. Delete
	3. Display
	4. Count
	5. Exit
	Your choice: 2
	20 is deleted.
	1. Insert
	2. Delete
	3. Display
	4. Count
	5. Exit
	Your choice: 3
	The queue is:
	25
	1. Insert
	2. Delete
	3. Display
	4. Count
	5. Exit
*/
