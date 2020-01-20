/* Write a C program to implement addition, subtraction, and multiplication and division operation using different functions */

#include<stdio.h>

void add(int x, int y)
{
	printf("Sum is %d.\n",x+y);
}
void sub(int x, int y)
{
	printf("Difference is %d.\n",x-y);
}
void mult(int x, int y)
{
	printf("Product is %d.\n",x*y);
}
void div(int x, int y)
{
	printf("Quotient is %d.\n",x/y);
}
int main()
{
	int x,y;
	printf("Enter the two numbers:\n");
	scanf("%d\n%d",&x,&y);
	add(x, y);
	sub(x, y);
	mult(x, y);
	div(x, y);
	return 0;
}

/* OUTPUT :
	Enter the two numbers:
	25
	5
	Sum is 30.
	Difference is 20.
	Product is 125.
	Quotient is 5.
*/
