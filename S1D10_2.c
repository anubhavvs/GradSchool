#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the odd number range:\n");
	scanf("%d",&n);
	printf("\nSeries:\n");
	for(i=1;i<=n;i=i+2)
	{
		if(i==n)
		{
			printf("%d = ",i);
		}
		else
		{
			printf("%d + ",i);
		}
		sum = sum+i;
	}
	printf("%d",sum);
	return 0;
}