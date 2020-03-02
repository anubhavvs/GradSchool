/*Write a C program to implement basic operations on circular queue.*/

#include<stdio.h>
#include<stdlib.h>

int size=5;
int cq[5];
int front=-1;
int rear=-1;

void insert()
{
	int x;
	if((front==0 && rear==size-1)||(rear==(front-1)%(size-1)))
	{
		printf("Queue is full. Delete some items to insert data.\n");
		return ;
	}
	else if(front==-1)
	{
		front=0;
		rear=0;
		printf("Enter the data: ");
		scanf("%d",&x);
		cq[rear]=x;
	}
	else if(rear==size-1 && front!=0)
	{
		rear=0;
		printf("Enter the data: ");
		scanf("%d",&x);
		cq[rear]=x;
	}
	else
	{
		rear++;
		printf("Enter the data: ");
		scanf("%d",&x);
		cq[rear]=x;
	}
	
}

void delete()
{
	if(front==-1)
	{
		printf("Queue is empty. Nothing to delete.\n");
		return ;
	}
	int x = cq[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
		printf("%d is deleted from the queue.\n",x);
	}
	else if(front==size-1)
	{
		front=0;
		printf("%d is deleted from the queue.\n",x);
	}
	else
	{
		printf("%d is deleted from the queue.\n",x);
		front++;
	}
}

void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty nothing to display.\n");
		return ;
	}
	if(rear>=front)
	{
		printf("The queue is:\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",cq[i]);
		}
	}
	else
	{
		printf("The queue is:\n");
		for(i=front;i<size;i++)
		{
			printf("%d\n",cq[i]);
		}
		for(i=0;i<=rear;i++)
		{
			printf("%d\n",cq[i]);
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
				printf("Invalid Option.\n");
				break;
		}
	}
	return 0;
}

/* OUTPUT:
	1. Insert
	2. Delete
	3. Display
	4. Exit
	Your choice: 1
	Enter the data: 10
	1. Insert
	2. Delete
	3. Display
	4. Exit
	Your choice: 1
	Enter the data: 40
	1. Insert
	2. Delete
	3. Display
	4. Exit
	Your choice: 3
	Queue:
	10
	40
	1. Insert
	2. Delete
	3. Display
	4. Exit
	Your choice: 2
	10 is deleted from the queue.
	1. Insert
	2. Delete
	3. Display
	4. Exit
	Your choice: 4
*/

