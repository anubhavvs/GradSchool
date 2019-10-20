#include<stdio.h>
int maxarray(int []);
int main()
{
	int x[10],i,max;
	printf("Enter 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	max = maxarray(x);
	printf("\nMax element:\n%d",max);
	return 0;
}
int maxarray(int x[])
{
	int max,k;
	max=x[0];
	for(k=0;k<10;k++)
	{
		if(x[k]>max)
		{
			max=x[k];
		}
	}
	return max;
}
