#include<stdio.h>
int main()
{
	int x[10],i,max,min;
	printf("Enter 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	min = x[0];
	max = x[0];
	for(i=0;i<10;i++)
	{
		if(x[i]>max)
		{
			max = x[i];
		}
		if(x[i]<min)
		{
			min = x[i];
		}
	}
	printf("Max value:\n%d\n",max);
	printf("Min value:\n%d\n",min);
	return 0;
}
