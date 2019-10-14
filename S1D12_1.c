#include<stdio.h>
int main()
{
	int x[10],i;
	for(i=0;i<10;i++)
	{
		printf("Enter a value: ");
		scanf("%d",&x[i]);
	}
	printf("Reversed Order:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",x[9-i]);
	}
	return 0;
}
