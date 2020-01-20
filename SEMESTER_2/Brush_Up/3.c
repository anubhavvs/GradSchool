/* Write a C program to take a range from user and display all prime number belongs to that range. */
#include<stdio.h>
#include<math.h>
int prime(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int lower, upper, i;
	printf("Enter the lower range:\n");
	scanf("%d",&lower);
	printf("Enter the upper range:\n");
	scanf("%d",&upper);
	printf("Prime Numbers:\n");
	for(i=lower; i<=upper; i++)
	{
		if(prime(i))
		{
			printf("%d, ",i);
		}
	}
	return 0;
}

/* OUTPUT :
	Enter the lower range:
	5
	Enter the upper range:
	50
	Prime Numbers:
	5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
*/
