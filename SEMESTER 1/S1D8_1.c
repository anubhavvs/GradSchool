#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter the number:\n");
	scanf("%d",&n);
	printf("Factorial:\n");
	for(i=1;i<=n;i++)
	{
		fact = fact * i;
	}
	printf("%d",fact);
	
	return 0;
}

/*OUTPUT:
	Enter the number:
	5
	Factorial:
	120
*/
