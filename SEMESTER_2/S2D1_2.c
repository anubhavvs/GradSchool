/*Write a C program to define a user define data type "employee" using structure. Take input from the user
for 3 employees and display the data. Use separate function to input and display data. Use case to choose 
option for the user.*/

#include<stdio.h>
#include<stdlib.h>
struct employee {
	int emp_no;
	char emp_name[20];
	int salary;
}e1, e2, e3;

void input()
{
	printf("1st Employee:\n");
	printf("Enter the Employee number:\n");
	scanf("%d",&e1.emp_no);
	printf("Enter the Employee name:\n");
	scanf("%s",&e1.emp_name);
	printf("Enter the Employee salary:\n");
	scanf("%d",&e1.salary);
	printf("2nd Employee:\n");
	printf("Enter the Employee number:\n");
	scanf("%d",&e2.emp_no);
	printf("Enter the Employee name:\n");
	scanf("%s",&e2.emp_name);
	printf("Enter the Employee salary:\n");
	scanf("%d",&e2.salary);
	printf("3rd Employee:\n");
	printf("Enter the Employee number:\n");
	scanf("%d",&e3.emp_no);
	printf("Enter the Employee name:\n");
	scanf("%s",&e3.emp_name);
	printf("Enter the Employee salary:\n");
	scanf("%d",&e3.salary);
}
void output()
{
	printf("1st Employee Data:\n");
	printf("Number:\t%d\n",e1.emp_no);
	printf("Name:\t%s\n",e1.emp_name);
	printf("Salary:\t%d\n",e1.salary);
	printf("2nd Employee Data:\n");
	printf("Number:\t%d\n",e2.emp_no);
	printf("Name:\t%s\n",e2.emp_name);
	printf("Salary:\t%d\n",e2.salary);
	printf("3rd Employee Data:\n");
	printf("Number:\t%d\n",e3.emp_no);
	printf("Name:\t%s\n",e3.emp_name);
	printf("Salary:\t%d\n",e3.salary);
}
int main()
{
	int ch;
	while(1)
	{
		printf("Press 1 to enter employee data\nPress 2 to display employee data\n3 to exit\n");
		printf("Your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				input();
				break;
			case 2:
				output();
				break;
			case 3:
				exit(0);
			default:
				printf("Choose Only valid option");
		}
	}
	return 0;
}

/* OUTPUT:
	Press 1 to enter employee data
	Press 2 to display employee data
	3 to exit
	Your choice: 1
	1st Employee:
	Enter the Employee number:
	12
	Enter the Employee name:
	ABC
	Enter the Employee salary:
	3000
	2nd Employee:
	Enter the Employee number:
	13
	Enter the Employee name:
	BBF
	Enter the Employee salary:
	3400
	3rd Employee:
	Enter the Employee number:
	45
	Enter the Employee name:
	WWER
	Enter the Employee salary:
	2345
*/

