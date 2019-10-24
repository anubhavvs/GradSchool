#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("Number is:\n");
	
	printf(n&1?"ODD":"EVEN");
	
	return 0;
}

/*OUTPUT:
	Enter a number:
	20
	Number is:
	EVEN
*/
