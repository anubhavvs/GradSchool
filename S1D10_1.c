#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("\nSUM:\n");
	while(num!=0)
	{
		rem = num%10;
		num = num/10;
		sum = sum + rem;
	}
	printf("%d",sum);
	return 0;
}
