#include<stdio.h>
void swap(float *m, float *n)
{
	float temp;
	temp = *m;
	*m = *n;
	*n = temp;
}
int main()
{
	float a,b;
	printf("Enter two float values:\n");
	scanf("%f\n%f",&a,&b);
	printf("\nBefore swapping:\na = %f\nb = %f",a,b);
	swap(&a,&b);
	printf("\nAfter swapping:\na = %f\nb = %f",a,b);
	return 0;
}
