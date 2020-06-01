/* Write a C program to implements the basic operation of stack using single Linked List. */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*start=NULL;

void push()
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

void pop()
{
    struct node *q, *p;
	if(start==NULL)
	{
		printf("Stack is empty.Nothing to pop.\n");
		return ;
	}
	else if(start->next==NULL)
	{
		p=start;
		start=NULL;
	}
	else
	{
		q=start;
		while(q->next->next!=NULL)
		{
			q=q->next;
		}
		p=q->next;
		q->next=NULL;
	}
	printf("%d is popped.\n",p->data);
	free(p);
}

void display()
{
    struct node *q;
	if(start==NULL)
	{
		printf("Stack is empty.Nothing to display.\n");
		return ;
	}
	q=start;
	printf("The stack is:\n");
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
		printf("Stack is empty.Nothing to count.\n");
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
		printf("1. Push\n2. Pop\n3. Display\n4. Count\n5. Exit\nYour choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
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
	1. Push
	2. Pop
	3. Display
	4. Count
	5. Exit
	Your choice: 1
	Enter the data: 20
	1. Push
	2. Pop
	3. Display
	4. Count
	5. Exit
	Your choice: 1
	Enter the data: 25
	1. Push
	2. Pop
	3. Display
	4. Count
	5. Exit
	Your choice: 2
	25 is popped.
	1. Push
	2. Pop
	3. Display
	4. Count
	5. Exit
	Your choice: 3
	The stack is:
	20
	1. Push
	2. Pop
	3. Display
	4. Count
	5. Exit
*/

