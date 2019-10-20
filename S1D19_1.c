#include<stdio.h>
void swap(float m, float n)
{
	float temp;
	temp = m;
	m = n;
	n = temp;
	printf("\n\nAfter swapping:\na = %f\nb = %f",m,n);
}
int main()
{
	float a,b;
	printf("Enter two float values:\n");
	scanf("%f\n%f",&a,&b);
	printf("\nBefore swapping:\na = %f\nb = %f",a,b);
	swap(a,b);
	return 0;
}
