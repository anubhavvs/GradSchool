#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the range:\n");
	scanf("%d",&n);
	printf("\nSeries:\n");
	for(i=1;i<=n;i++)
	{
		if(i==n)
		{
			printf("%d = ",i*i);
		}
		else
		{
			printf("%d + ",i*i);
		}
		sum = sum + pow(i,2);
	}
	printf("%d",sum);
	
	return 0;
}

/*OUTPUT:
	Enter the range:
	5
	
	Series:
	1 + 4 + 9 + 16 + 25 = 55
*/
