#include<stdio.h>
int sum(int x, int y)
{	
	printf("The sum is %d\n",x+y);
}
int sub(int x, int y)
{
	printf("The difference is %d\n",x-y);
}
int mul(int x, int y)
{
	printf("The product is %d\n",x*y);
}
float div(int x, int y)
{
	printf("The division is %d\n",x/y);
}
int main()
{
	int ch,a,b;
	printf("Enter the two numbers:\n");
	scanf("%d\n%d",&a,&b);
	printf("Choose from the following:\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	printf("Your Choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			sum(a,b);
			break;
		case 2:
			sub(a,b);
			break;
		case 3:
			mul(a,b);
			break;
		case 4:
			div(a,b);
			break;
		default:
			printf("Select from valid option!\n");
			break;
	}	
	return 0;
}
