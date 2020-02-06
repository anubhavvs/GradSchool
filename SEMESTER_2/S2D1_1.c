/*Write a C program to add two distances entered by user. Measurement should be in inch and feet*/

#include<stdio.h>

struct distance {
	int foot;
	int inch;
}d1, d2, sum;

int main()
{
	printf("Enter the first distance:\n");
	printf("Foot: ");
	scanf("%d",&d1.foot);
	printf("Inches: ");
	scanf("%d",&d1.inch);
	printf("Enter the second distance:\n");
	printf("Foot: ");
	scanf("%d",&d2.foot);
	printf("Inches: ");
	scanf("%d",&d2.inch);

	sum.foot = d1.foot + d2.foot;
	sum.inch = d1.inch + d2.inch;

	while(sum.inch>=12)
	{
		sum.inch-=12;
		sum.foot++;
	}

	printf("Sum of the distance:\n%d foot %d inches\n",sum.foot,sum.inch);
	return 0;
}

/* 	OUTPUT:

	Enter the first distance:
	Foot: 10
	Inches: 25
	Enter the second distance:
	Foot: 5
	Inches: 2
	Sum of the distance:
	17 foot 3 inches
*/

