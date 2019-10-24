#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("Number is:\n");
	if(n&1)
	{
		printf("ODD");
	}
	else
	{
		printf("EVEN");
	}
	return 0;
}

/*OUTPUT:
	Enter a number:
	11
	Number is:
	ODD
*/
