/*Write a C program to insert, delete and display data of a stack using array and switch case.*/

#include<stdio.h>
#include<stdlib.h>

int size=10;
int stk[10];
int top=-1;

void push()
{
	int x;
	if(top==size-1)
	{
		printf("Stack Overflow.Delete some item to push a value.\n");
	}
	else
	{	
		printf("Enter the value:\n");
		scanf("%d",&x);
		top++;
		stk[top]=x;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("Stack is empty.Nothing to pop.\n");
	}
	else
	{
		printf("%d is deleted from the stack.\n",stk[top]);
		top--;
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty. Nothing to display.\n");
	}
	else
	{	
		printf("Stack elements are:\n");
		for(i=0;i<=top;i++)
		{
			printf("%d\n",stk[i]);
		}
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("1. Push\n2. Pop\n3. Display\n4. Exit\nYour choice: ");
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
	4. Exit
	Your choice: 1
	Enter the value:
	10
	1. Push
	2. Pop
	3. Display
	4. Exit
	Your choice: 1
	Enter the value:
	20
	1. Push
	2. Pop
	3. Display
	4. Exit
	Your choice: 2
	20 is deleted from the stack.
	1. Push
	2. Pop
	3. Display
	4. Exit
	Your choice: 3
	Stack elements are:
	10
*/
