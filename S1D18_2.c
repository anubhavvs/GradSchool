#include<stdio.h>
int sum()
{
	int x, y;
	printf("Enter two numbers for addition:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("The sum is %d\n",x+y);
}
int sub()
{
	
	int x, y;
	printf("Enter two numbers for subtraction:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("The difference is %d\n",x-y);
}
int mul()
{
	int x, y;
	printf("Enter two numbers for multiplication:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("The product is %d\n",x*y);
}
float div()
{
	int x, y;
	printf("Enter two numbers for division:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("The division is %d\n",x/y);
}
int main()
{
	int ch;
	printf("Choose from the following:\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
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
		default:
			printf("Select from valid option!\n");
			break;
	}	
	return 0;
}
