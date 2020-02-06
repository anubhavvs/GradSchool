/*Write a C program to store information of a student using a structure. Use a pointer variable.*/

#include<stdio.h>

struct student {
	char name[20];
	int roll;
	int marks;
} s1;

struct student *p1=&s1;

int main()
{
	printf("Enter the student details:\n");
	printf("Enter name:\n");
	scanf("%s",p1->name);
	printf("Enter roll:\n");
	scanf("%d",&p1->roll);
	printf("Enter marks:\n");
	scanf("%d",&p1->marks);

	printf("Name:\t%s\nRoll:\t%d\nMarks:\t%d\n",p1->name,p1->roll,p1->marks);
	return 0;
}

/* OUTPUT:
	Enter the student details:
	Enter name:
	Anubhav
	Enter roll:
	16
	Enter marks:
	56
	Name:   Anubhav
	Roll:   16
	Marks:  56
*/

