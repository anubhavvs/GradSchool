/* Write a C program to implemet call by value and call by reference using function */

#include<stdio.h>
void swap1(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swap2(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a, b;
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	swap1(a, b);
	printf("CALL BY VALUE:\n");
	printf("a = %d\nb = %d\nSo values are not changed!\n\n",a,b);
	swap2(&a, &b);
	printf("CALL BY REFERENCE:\n");
	printf("a = %d\nb = %d\nValues are actually changed!\n\n",a,b);
}

/* OUTPUT :
	Enter the value of a:
	15
	Enter the value of b:
	20
	CALL BY VALUE:
	a = 15
	b = 20
	So values are not changed!
	
	CALL BY REFERENCE:
	a = 20
	b = 15
	Values are actually changed!
*/
