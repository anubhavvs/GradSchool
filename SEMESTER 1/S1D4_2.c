#include<stdio.h>
int main()
{
	float sa,g;
	printf("Enter sales amount:\n");
	scanf("%f",&sa);
	printf("Enter grade:\n");
	scanf("%f",&g);
	printf("Commission:\n");
	if(sa>=12000 && g>5)
	{
		printf("%.2f",0.235*sa);
	}
	else if(sa>=12000 && g<5 && g>3)
	{
		printf("%.2f",0.23*sa);
	}
	else if(sa<12000 && g>5)
	{
		printf("%.2f",0.224*sa);
	}
	else
	{
		printf("%.2f",0.218*sa);
	}
	
	return 0;
}

/*OUTPUT:
	Enter sales amount:
	20000
	Enter grade:
	2
	Commission:
	4360.00
*/
