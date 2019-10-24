#include<stdio.h>
#include<math.h>
int main()
{
	float ci,p,r,t;
	printf("Enter the Principal:\n");
	scanf("%f",&p);
	printf("Enter the rate:\n");
	scanf("%f",&r);
	printf("Enter the time period:\n");
	scanf("%f",&t);
	
	ci = p*pow((1 + (r/100)),t);
	
	printf("Compound Interest:\n%.2f",ci);
	return 0;
}

/* OUTPUT:
	
	Enter the Principal:                                                                                                                          
	10000                                                                                                                                         
	Enter the rate:                                                                                                                               
	5                                                                                                                                             
	Enter the time period:                                                                                                                        
	2                                                                                                                                             
	Compound Interest:                                                                                                                            
	11025.00
	
*/
