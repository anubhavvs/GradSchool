/* Write a program to sort 10 numbers using insertion sort. */

#include<stdio.h>
#define n 5

int main()
{
	int x[n], i, j, k, temp;
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			if(x[j-1]>x[j])
			{
				temp=x[j-1];
				x[j-1]=x[j];
				x[j]=temp;
			}
		}
	}
	printf("Sorted List:\n");
	for(i=0;i<n;i++)
	{
		printf("%d, ",x[i]);
	}
	return 0;
}

/* OUTPUT:
	Enter the elements:
	5
	2
	1
	7
	8
	Sorted List:
	1, 2, 5, 7, 8,
*/
