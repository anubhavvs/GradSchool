#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks:\n");
	scanf("%d",&marks);

	if(marks>=600)
	{
		printf("1st Division.\n");
	}
	else if(marks<600 && marks>=450)
	{
		printf("2nd Division.\n");
	}
	else if(marks<450 && marks>=300)
	{
		printf("3rd Division.\n");
	}
	else
	{
		printf("FAIL\n");
	}
	return 0;
}
