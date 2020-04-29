/* Write a program to sort 10 numbers using selection sort. */

#include<stdio.h>
#define n 5

int main()
{
	int x[n], i, j, temp, small;
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n-1;i++)
	{
		small=i;
		for(j=i+1;j<n;j++)
		{
			if(x[small]>x[j])
			{
				small=j;
			}
		}
		if(i!=small)
		{
			temp=x[i];
			x[i]=x[small];
			x[small]=temp;
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
