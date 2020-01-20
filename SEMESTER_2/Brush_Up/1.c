/* Write a C program to take two 10-elements array, consider user input and display them using function */

#include<stdio.h>
void getarray(int a[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
}
void printarray(int a[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d, ",a[i]);
	}
}
int main()
{
	int x[10], y[10];
	printf("Enter the first array:\n");
	getarray(x);
	printf("Enter the second array:\n");
	getarray(y);
	printf("\nFirst array:\n");
	printarray(x);
	printf("\nSecond array:\n");
	printarray(y);
	return 0;
}

/* OUTPUT :
	Enter the first array:
	1
	2
	3
	4
	5
	6
	7
	8
	9
	10
	Enter the second array:
	10
	9
	8
	7
	6
	5
	4
	3
	2
	1
	
	First array:
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
	Second array:
	10, 9, 8, 7, 6, 5, 4, 3, 2, 1,
*/

