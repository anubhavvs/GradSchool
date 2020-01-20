/* Write a C program to add two matrices and display the summation. */

#include<stdio.h>

int main()
{
	int x[3][3],y[3][3];
	int i,j;
	printf("Enter the values for first matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("Enter the values for second matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	printf("Result Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",x[i][j]+y[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/* OUTPUT :
	Enter the values for first matrix:
	1
	2
	3
	4
	5
	6
	7
	8
	9
	Enter the values for second matrix:
	9
	8
	7
	6
	5
	4
	3
	2
	1
	Result Matrix:
	10      10      10
	10      10      10
	10      10      10
*/
