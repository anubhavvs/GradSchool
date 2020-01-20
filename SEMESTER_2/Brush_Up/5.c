/* Write a C program to user input for a M x N matrix and display the data */

#include<stdio.h>

int main()
{
	int i,j,M,N;
	printf("Enter the row and column range:\n");
	scanf("%d\n%d",&M,&N);
	int x[M][N];
	printf("Enter the elements of matrix:\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("The Matrix:\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/* OUTPUT :
	Enter the row and column range:
	3
	3
	Enter the elements of matrix:
	1
	2
	3
	4
	5
	6
	7
	8
	9
	The Matrix:
	1       2       3
	4       5       6
	7       8       9
*/
