#include<stdio.h>
int main()
{
	int x[10],i,sum=0;
	float avg;
	printf("Enter 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
		sum+=x[i];
	}
	avg = (float)sum/10;
	printf("Average: %.2f",avg);
	printf("\nValues less than average:\n");
	for(i=0;i<10;i++)
	{
		if(x[i]<avg)
		{
			printf("%d, ",x[i]);
		}
	}
	printf("\nValues more than average:\n");
	for(i=0;i<10;i++)
	{
		if(x[i]>avg)
		{
			printf("%d, ",x[i]);
		}
	}
	return 0;
}

/*OUTPUT:
	Enter 10 integer values:
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
	Average: 5.50
	Values less than average:
	1, 2, 3, 4, 5,
	Values more than average:
	6, 7, 8, 9, 10
*/
