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

/*OUTPUT:
	Enter the range:
	10
	Enter the value of c:
	2
	
	Series:
	1*2 + 2*2 + 3*2 + 4*2 + 5*2 + 6*2 + 7*2 + 8*2 + 9*2 + 10*2 = 110
*/
