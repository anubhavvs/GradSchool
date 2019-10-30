#include<stdio.h>
int x, y;
void sum()
{
	printf("Enter two numbers for addition:\n");
	scanf("%d\n%d",&x,&y);
	printf("The sum is %d\n",x+y);
}
void sub()
{
	printf("Enter two numbers for subtraction:\n");
	scanf("%d\n%d",&x,&y);
	printf("The difference is %d\n",x-y);
}
void mul()
{
	printf("Enter two numbers for multiplication:\n");
	scanf("%d\n%d",&x,&y);
	printf("The product is %d\n",x*y);
}
void div()
{
	printf("Enter two numbers for division:\n");
	scanf("%d\n%d",&x,&y);
	printf("The division is %d\n",x/y);
}
int main()
{
	int ch;
	do
	{
		printf("Choose from the following:\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit");
		printf("Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				sum();
				break;
			case 2:
				sub();
				break;
			case 3:
				mul();
				break;
			case 4:
				div();
				break;
		}
	}while(ch!=5);
	return 0;
}

/*OUTPUT:
	Choose from the following:
	1. Addition
	2. Subtraction
	3. Multiplication
	4. Division
	5. Exit
	Your choice: 2
	Enter two numbers for subtraction:
	100
	20
	The difference is 80
*/
