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
	
	printf("The division is %.2f\n",x/y);
}
int main()
{
	sum();
	sub();
	mul();
	div();
	
	return 0;
}
