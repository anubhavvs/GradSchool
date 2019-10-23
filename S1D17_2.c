#include<stdio.h>
#include<string.h>
int main()
{
	char x[10],y[10],z[10];
	int i;
	printf("Enter first 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter second 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&y[i]);
	}
	printf("Result array:\n");
	for(i=0;i<10;i++)
	{
		z[i]=x[i]+y[i];
		printf("%d\n",z[i]);
	}
	
	return 0;
}
