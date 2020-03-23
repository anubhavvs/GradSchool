/* Write a program to reverse the elements of an array. */

#include<stdio.h>
#define size 4

int main()
{
	int x[size],y[size];
	int i,j;
	printf("Enter the data:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0,j=size-1;i<size;i++,j--)
	{
		y[j] = x[i];
	}
	for(i=0;i<size;i++)
	{
		x[i] = y[i];
	}
	printf("Reversed Array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",x[i]);
	}
	return 0;
}

/* OUTPUT:
	Enter the data:
	1
	2
	3
	4
	Reversed Array:
	4
	3
	2
	1
*/
