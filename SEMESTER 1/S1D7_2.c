#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the number of lines: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",k%2);
			k++;
		}
		printf("\n");
	}
}

/*OUTPUT:
	Enter the number of lines:
	5
	    0
	   10
	  101
	 0101
	01010
*/
