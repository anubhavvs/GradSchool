#include<stdio.h>
int main()
{
	float omarks,tmarks,perc;
	printf("Enter the marks obtained: \n");
	scanf("%f",&omarks);
	printf("Enter the total marks : \n");
	scanf("%f",&tmarks);
	
	perc = (omarks/tmarks)*100;
	
	printf("Percentage Obtained : %.2f%%\n",perc);
}

/*OUTPUT:
	
	Enter the marks obtained:                                                                                                                     
	54                                                                                                                                            
	Enter the total marks :                                                                                                                       
	200                                                                                                                                           
	Percentage Obtained : 27.00%
	
*/
