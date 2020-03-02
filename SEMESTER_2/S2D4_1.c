#include<stdio.h>
#include<stdlib.h>

int size=5;
int q[5];
int front=0,rear=0;

void insert()
{
	int x;
	if(rear==size)
	{
		printf("Not enough memory. Delete some items to insert more.\n");
	}
	else
	{
		printf("Enter the data: ");
		scanf("%d",&x);
		q[rear]=x;
		rear++;
	}
}

void delete()
{
	if(front==rear)
	{
		printf("Queue is empty. Nothing to delete.\n");
	}
	else
	{
		printf("%d is deleted from the queue.\n",q[front]);
		front++;
	}
}

void display()
{
	int i;
	if(front==rear)
	{
		printf("Queue is empty. Nothing to display.\n");
		
	}
	else
	{
		printf("Queue:\n");
		for(i=front;i<rear;i++)
		{
			printf("%d\n",q[i]);
		}
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nYour choice: ");
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
				exit(0);
			default:
				printf("Invalid Option\n");
				break;
		}
	}
	return 0;
}
