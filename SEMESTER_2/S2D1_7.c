/*Define a structure "complex" to read two complex numbers and perform addition, subtraction of these 
two complex numbers and display the result.*/

#include<stdio.h>

typedef struct complex {
	float real;
	float imag;
} complex;

complex add(complex n1, complex n2)
{
	complex temp;
	temp.real = n1.real + n2.real;
	temp.imag = n1.imag + n2.imag;
	return temp;
}

complex sub(complex n1, complex n2)
{
	complex temp;
	temp.real = n1.real - n2.real;
	temp.imag = n1.imag - n2.imag;
	return temp;
}

int main()
{
	complex n1, n2, sum, diff;
	printf("For 1st complex number:\n");
	printf("Enter real and imaginary part:\n");
	scanf("%f\n%f",&n1.real,&n1.imag);

	printf("For 2nd complex number:\n");
	printf("Enter real and imaginary part:\n");
	scanf("%f\n%f",&n2.real,&n2.imag);

	sum = add(n1, n2);
	diff = sub(n1, n2);

	printf("Sum : %.1f + %.1fi\n", sum.real, sum.imag);
	printf("Difference : %.1f + %.1fi\n", diff.real, diff.imag);
	
	return 0;
}

/* OUTPUT:
	For 1st complex number:
	Enter real and imaginary part:
	20
	5
	For 2nd complex number:
	Enter real and imaginary part:
	14
	3
	Sum : 34.0 + 8.0i
	Difference : 6.0 + 2.0i
*/
