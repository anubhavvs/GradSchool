#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter tempareture in Celsius:\n");
	scanf("%f",&c);
	
	f = (c*9/5)+32;
	
	printf("Temperature in Fahrenheit:\n%.2f\n",f);
	return 0;
}

/* OUTPUT:
	
	Enter tempareture in Celsius:                                                                                                                 
	100                                                                                                                                           
	Temperature in Fahrenheit:                                                                                                                    
	212.00
	
*/
