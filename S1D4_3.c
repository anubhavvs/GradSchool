#include<stdio.h>
int main()
{
	int a,n2000=0,n500=0,n100=0,n50=0,n20=0,n10=0;
	printf("Enter the amount:\n");
	scanf("%d",&a);
	if(a>=2000)
	{
		n2000 = a/2000;
		a -= n2000*2000;
	}
	if(a>=500)
	{
		n500 = a/500;
		a -= n500*500;
	}
	if(a>=100)
	{
		n100 = a/100;
		a -= n100*100;
	}
	if(a>=50)
	{
		n50 = a/50;
		a -= n50*50;
	}
	if(a>=20)
	{
		n20 = a/20;
		a -= n20*20;
	}
	if(a>=10)
	{
		n10 = a/10;
		a -= n10*10;
	}
	
	printf("Denominations:\n");
	printf("2000: %d\n",n2000);
	printf("500 : %d\n",n500);
	printf("100 : %d\n",n100);
	printf("50 : %d\n",n50);
	printf("20 : %d\n",n20);
	printf("10 : %d\n",n10);
	
	return 0;
	
}
