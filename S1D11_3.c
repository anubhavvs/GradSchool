#include<stdio.h>
int main()
{
	int n,i,sum=0,c;
	printf("Enter the range:\n");
	scanf("%d",&n);
	printf("Enter value of c:\n");
	scanf("%d",&c);
	printf("\nSeries:\n");
	for(i=1;i<=n;i++)
	{
		if(i==n)
		{
			printf("%d*%d = ",i,c);
		}
		else
		{
			printf("%d*%d + ",i,c);
		}
		sum += i*c;
	}
	printf("%d",sum);
	return 0;
}
