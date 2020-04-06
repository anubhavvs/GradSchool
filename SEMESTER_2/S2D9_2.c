#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start=NULL;

void display()
{
    struct node *temp;
    temp=start;
    printf("\nData:\n");
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
}

void reverse()
{
    struct node *pre, *now;
    pre=start;
    now=start->next;
    start=start->next;
    pre->next=NULL;
    while(start!=NULL)
    {
        start=start->next;
        now->next=pre;
        pre=now;
        now=start;
    }
    start = pre;
}

void create(int n)
{
	struct node *p,*prev;
	int i;
	printf("Enter the data:\n");
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(start==NULL)
            start=p;
        else
            prev->next=p;
        prev=p;
    }
}

int main()
{
    int n;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    create(n);
    display();
    reverse();
    display();
}

