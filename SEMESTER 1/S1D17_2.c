#include<stdio.h>
#include<string.h>
int main()
{
	int x[10],y[10],z[10];
	int i;
	printf("Enter first 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter second 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&y[i]);
	}
	printf("Result array:\n");
	for(i=0;i<10;i++)
	{
		z[i]=x[i]+y[i];
		printf("%d, ",z[i]);
	}
	
	return 0;
}

/*OUTPUT:
	Enter first 10 integer values:
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
	Enter second 10 integer values:
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
	Result array:
	2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 
*/
