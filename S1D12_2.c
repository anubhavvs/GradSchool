#include<stdio.h>
int main()
{
	float x[10],sum=0.0,avg;
	int i;
	printf("Enter 15 float values:\n");
	for(i=0;i<15;i++)
	{
		scanf("%f",&x[i]);
		sum += x[i];
	}
	avg = sum/15;
	printf("\nSum : %.2f",sum);
	printf("\nAverage : %.2f",avg);
	
	return 0;
}
