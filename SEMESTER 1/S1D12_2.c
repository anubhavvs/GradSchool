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

/*OUTPUT:
	Enter 15 float values:
	1.0
	2.0
	3.0
	4.0
	5.0
	6.0
	7.0
	8.0
	9.0
	10.0
	11.0
	12.0
	13.0
	14.0
	15.0
	
	Sum: 120.00
	Average: 8
*/
