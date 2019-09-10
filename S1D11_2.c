#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the range:\n");
	scanf("%d",&n);
	printf("\nSeries:\n");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("- %d ",i);
			sum = sum - i;
		}
		else
		{
			printf("+ %d ",i);
			sum = sum + i;
		}
	}
	printf("= %d",sum);
	return 0;
}
