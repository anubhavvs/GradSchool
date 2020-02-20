/*Write a C program to define a user defined data type (student) using structure having variables-
roll, name, math_marks, english_marks, rank. Implement a stack to store, delete and display the record.*/

#include<stdio.h>
#include<stdlib.h>

int size=10;
struct student
{
	int roll;
	char std_name[20];
	float maths_marks;
	float english_marks;
	int rank;
	float total_marks;
};
struct student st[10];
int top=-1;

void push()
{
	struct student x;
	if(top==size-1)
	{
		printf("Record is full.Delete some item to enter a new value.\n");
	}
	else
	{	
		printf("Enter the roll:\n");
		scanf("%d",&x.roll);
		printf("Enter the name:\n");
		scanf("%s",&x.std_name);
		printf("Enter the math marks:\n");
		scanf("%f",&x.maths_marks);
		printf("Enter the english marks:\n");
		scanf("%f",&x.english_marks);
		printf("Enter the rank:\n");
		scanf("%d",&x.rank);
		x.total_marks = x.maths_marks + x.english_marks;
		top++;
		st[top]=x;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("Record is empty.Nothing to delete.\n");
	}
	else
	{
		printf("Record of %s is deleted from the stack.\n",st[top].std_name);
		top--;
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("Record is empty. Nothing to display.\n");
	}
	else
	{	
		printf("Record:\n");
		for(i=0;i<=top;i++)
		{
			printf("Roll: %d\n",st[i].roll);
			printf("Name: %s\n",st[i].std_name);
			printf("Math marks: %.2f\n",st[i].maths_marks);
			printf("English Marks: %.2f\n",st[i].english_marks);
			printf("Rank: %d\n",st[i].rank);
			printf("Total marks: %.2f\n",st[i].total_marks);
			
		}
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("1. Enter record\n2. Delete a record\n3. Display the display\n4. Exit\nYour choice: ");
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
	1. Enter record
	2. Delete a record
	3. Display the display
	4. Exit
	Your choice: 1
	Enter the roll:
	16
	Enter the name:
	Anubhav
	Enter the math marks:
	80
	Enter the english marks:
	75
	Enter the rank:
	2
	1. Enter record
	2. Delete a record
	3. Display the display
	4. Exit
	Your choice: 3
	Record:
	Roll: 16
	Name: Anubhav
	Math marks: 80.00
	English Marks: 75.00
	Rank: 2
	Total marks: 155.00
	1. Enter record
	2. Delete a record
	3. Display the display
	4. Exit
	Your choice: 2
	Record of Anubhav is deleted from the stack.
*/
