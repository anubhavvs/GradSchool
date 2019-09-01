#include<stdio.h>
int main()
{
	int num,i,rev=0,rem;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Reversed:\n");
	while(num!=0)
	{
		rem = num%10;
		num = num/10;
		rev = rev*10 + rem;
	}
	printf("%d",rev);
}
