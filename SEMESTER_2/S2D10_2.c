/*  Write a C program to remove the first node from the linked list and insert it at the end. */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
}*start=NULL;

void create(int n)
{
	struct node *p,*prev;
	int i;
	printf("Enter the data:\n");
    for(i=0;i<n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(start==NULL)
            start=p;
        else
            prev->next=p;
        prev=p;
    }
}

int del_beg()
{
	int del;
	struct node *tmp;
	tmp=start;
	start=start->next;
	del=tmp->data;
	free(tmp);
	return del;
}

void add_end(int x) //Adds value at the end
{
	struct node *q, *tmp, *p;
	q=start;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->data=x;
	q->next=tmp;
	tmp->next=NULL;
}

void display() //Displays the whole list
{
	struct node *q;
	q=start;
	printf("The nodes are:\n");
	while(q!=NULL)
	{
		printf("%d -> ",q->data);
		q=q->next;
	}
}

int main()
{
	int n, x;
	printf("Enter the size of the linked list:\n");
	scanf("%d",&n);
	if(n>1)
	{
		create(n);
		printf("\nBefore Operation:\n");
		display();
		x = del_beg();
		add_end(x);
		printf("\nAfter Operation:\n");
		display();
	}
	else
	{
		printf("Operation cannot be performed.\n");
	}
	return 0;
}

/* OUTPUT:
	Enter the size of the linked list:
	6
	Enter the data:
	13
	45
	78
	123
	89
	432
	
	Before Operation:
	The nodes are:
	13 -> 45 -> 78 -> 123 -> 89 -> 432 ->
	After Operation:
	The nodes are:
	45 -> 78 -> 123 -> 89 -> 432 -> 13 ->
	*/
