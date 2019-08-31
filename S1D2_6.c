#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("The number is:\n");
	num%2?printf("Odd"):printf("Even");
	return 0;
}
