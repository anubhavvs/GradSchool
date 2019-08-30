#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two numbers:\n");
	scanf("%d\n%d",&a,&b);
	printf("\nBEFORE SWAPPING :\na = %d\nb = %d\n",a,b);
	
	c = b;
	b = a;
	a = c;
	
	printf("\nAFTER SWAPPING :\na = %d\nb = %d\n",a,b);
	return 0;
}
