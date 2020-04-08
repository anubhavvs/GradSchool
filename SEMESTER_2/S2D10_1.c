/* Write a C program to create two separate linked lists and insert data in both linked list. Then concatenate one linked list at the end of other. */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node {
	int data;
	struct node *next;
}*start1=NULL, *start2=NULL;

void create(int n1, int n2)
{
	struct node *p,*prev;
	int i;
	printf("Enter the data for the first list:\n");
    for(i=0;i<n1;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(start1==NULL)
            start1=p;
        else
            prev->next=p;
        prev=p;
    }
	printf("Enter the data for the second list:\n");
    for(i=0;i<n2;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(start2==NULL)
            start2=p;
        else
            prev->next=p;
        prev=p;
    }
}

void display(struct node *start)
{
	struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
}

void join()
{
	struct node *temp;
	temp=start1;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=start2;
}

int main()
{
	int n1,n2;
	printf("Number of nodes for the first list: ");
	scanf("%d",&n1);
	printf("Number of nodes for the second list: ");
	scanf("%d",&n2);
	create(n1, n2);
	printf("\n1st List:\n");
	display(start1);
	printf("\n2nd List:\n");
	display(start2);
	join();
	printf("\nAfter concatenation:\n");
	display(start1);
	return 0;
}

/* OUTPUT:
	Number of nodes for the first list: 4
	Number of nodes for the second list: 3
	Enter the data for the first list:
	5
	8
	9
	1
	Enter the data for the second list:
	32
	57
	41
	
	1st List:
	5 -> 8 -> 9 -> 1 ->
	2nd List:
	32 -> 57 -> 41 ->
	After concatenation:
	5 -> 8 -> 9 -> 1 -> 32 -> 57 -> 41 ->
*/
