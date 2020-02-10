/*Write a C program to demonstrate the dynamic memory allocation for structure to score students name and marks.
Show average marks for all students.*/

#include<stdio.h>
#include<stdlib.h>

struct student {
	char name[20];
	int marks;
};

int main()
{
	int n, i, sum=0;
	struct student *p;
	printf("Enter number of records:\n");
	scanf("%d",&n);
	p = (struct student *) malloc(n*sizeof(struct student));
	if(p==NULL){
		printf("Error! Not enough memory\n");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the student name and marks:\n");
		scanf("%s\n%d",&(p+i)->name,&(p+i)->marks);
		sum += (p+i)->marks;
	}
	printf("Average marks:\n%d\n",sum/n);
	return 0;
}

/* OUTPUT: 
	Enter number of records:
	5
	Enter the student name and marks:
	A
	10
	Enter the student name and marks:
	B
	20
	Enter the student name and marks:
	C
	50
	Enter the student name and marks:
	D
	25
	Enter the student name and marks:
	E
	25
	Average marks:
	26
*/

