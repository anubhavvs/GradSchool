/*Write a C program to store a information about a person by passing structure to a function.*/

#include<stdio.h>

struct person {
	char name[20];
	long int number;
	int age;
};

void input(struct person p1)
{
	printf("Enter name:\n");
	scanf("%s",&p1.name);
	printf("Enter number:\n");
	scanf("%ld",&p1.number);
	printf("Enter age:\n");
	scanf("%d",&p1.age);

	printf("Details:\nName:\t%s\nNumber:\t%ld\nAge:\t%d\n",p1.name,p1.number,p1.age);
}

int main()
{
	struct person p1;
	printf("Enter the details about the person:\n");
	input(p1);

	return 0;
}

/* OUTPUT:
	Enter the details about the person:
	Enter name:
	Person1
	Enter number:
	12345678
	Enter age:
	34
	Details:
	Name:   Person1
	Number: 12345678
	Age:    34
*/

