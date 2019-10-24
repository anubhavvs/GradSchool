#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the range:\n");
	scanf("%d",&n);
	printf("\nSeries:\n");
	for(i=2;i<=n;i=i+2)
	{
		if(i==n || i==n-1)
		{
			printf("%d = ",i);
		}
		else
		{
			printf("%d + ",i);
		}
		sum = sum + i;
	}
	printf("%d",sum);
	return 0;
}

/*OUTPUT:
	Enter the range:
	10
	
	Series:
	2 + 4 + 6 + 8 + 10 = 30
*/
