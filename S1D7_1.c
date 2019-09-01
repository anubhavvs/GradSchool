#include<stdio.h>
int main()
{
	int i,j,n,k=0;
	printf("Enter the number of lines: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k%2);
			k++;
		}
		printf("\n");
	}
}
