#include<stdio.h>
int main()
{
	float t;
	printf("Enter a temperature in Celsius:\n");
	scanf("%f",&t);
	if(t>0)
	{
		printf("More than freezing.\n");
	}
	else if(t==0)
	{
		printf("Equal to freezing.\n");
	}
	else
	{
		printf("Less than freezing.\n");
	}
	return 0;
}
