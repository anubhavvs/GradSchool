#include<stdio.h>
int main()
{
	float amt;
	printf("Enter the amount:\n");
	scanf("%f",&amt);
	printf("Amount + Tax:\n");
	if(amt<800)
	{
		printf("%.2f",amt);
	}
	else if(amt>=800 && amt<1200)
	{
		printf("%.2f",amt+amt*0.10);
	}
	else if(amt>=1200 && amt<2000)
	{
		printf("%.2f",amt+amt*0.15);
	}
	else
	{
		printf("%.2f",amt+amt*0.22);
	}
	
	return 0;
}

/*OUTPUT:
	Enter the amount:
	2500
	Amount + Tax:
	3050.00
*/
