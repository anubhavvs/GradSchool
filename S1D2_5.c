#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers:\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	printf("Maximum number:\n");
	printf("%d",a>b?(a>c?a:c):(b>c?b:c));
	return 0;
}
