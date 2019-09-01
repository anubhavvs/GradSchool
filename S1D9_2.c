#include<stdio.h>
int main()
{
	int num,tnum,i,rev=0,rem;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Reversed:\n");
	tnum = num;
	while(num!=0)
	{
		rem = num%10;
		num = num/10;
		rev = rev*10 + rem;
	}
	printf("%d",rev);
	printf("\n");
	if(rev==tnum)
	{
		printf("\nPALINDROME\n");
	}
	else
	{
		printf("\nNOT A PALINDROME\n");
	}
}
