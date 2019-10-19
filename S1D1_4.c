#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers:\n");
	scanf("%d\n%d",&a,&b);
	printf("\nBEFORE SWAPPING :\na = %d\nb = %d\n",a,b);
	
	b = a+b;
	a = b-a;
	b = b-a;
	
	printf("\nAFTER SWAPPING :\na = %d\nb = %d\n",a,b);
	return 0;
}

/* OUTPUT:
	
	Enter the two numbers:                                                                                                                          
	50                                                                                                                                              
	100                                                                                                                                             
                                                                                                                                                
	BEFORE SWAPPING :                                                                                                                               
	a = 50                                                                                                                                          
	b = 100                                                                                                                                         
                                                                                                                                                
	AFTER SWAPPING :                                                                                                                                
	a = 100                                                                                                                                         
	b = 50
	
*/
