/*Write a program to read roll no., name, address, age and average marks of 12 students in the BCA class and display the details.*/

#include<stdio.h>

struct student {
	int roll;
	char name[20];
	char address[40];
	int age;
	int marks;
};

int main()
{
	struct student st[12];
	int i;
	printf("Enter records of 12 students:\n");
	for(i=0;i<12;i++)
	{
		printf("Enter record for %d student:\n",i+1);
		printf("Enter roll:\n");
		scanf("%d",&st[i].roll);
		printf("Enter name:\n");
		scanf("%s",&st[i].name);
		printf("Enter address:\n");
		scanf("%s",&st[i].address);
		printf("Enter age:\n");
		scanf("%d",&st[i].age);
		printf("Enter average marks:\n");
		scanf("%d",&st[i].marks);
	}
	for(i=0;i<12;i++)
	{
		printf("Student %d:\nRoll:\t%d\nName:\t%s\nAddress:\t\nAge:\t%d\nAverage Marks:\t%d\n",st[i].roll,st[i].name,st[i].address,st[i].age,st[i].marks);
	}
	return 0;
}

/* OUTPUT:
	Enter records of 12 students:
	Enter record for 1 student:
	Enter roll:
	12
	Enter name:
	ASDF
	Enter address:
	12Addfg
	Enter age:
	56
	Enter average marks:
	123
	Enter record for 2 student:
	....
	....
	....
*/

