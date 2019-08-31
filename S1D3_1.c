#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter three numbers:\n");
	scanf("%f\n%f\n%f",&a,&b,&c);
	printf("\n");
	if(a>b && a>c)
	{
		printf("%.2f is the largest.\n",a);
	}
	else if(b>a && b>c)
	{
		printf("%.2f is the largest.\n",b);
	}
	else if(c>a && c>b)
	{
		printf("%.2f is the largest.\n",c);
	}
	else if(a==c && c>b)
	{
		printf("%.2f and %.2f is the largest.\n",a,b);
	}
	else if(b==c && b>a)
	{
		printf("%.2f and %.2f is the largest.\n",b,c);
	}
	else if(c==a && a>b)
	{
		printf("%.2f and %.2f is the largest.\n",a,c);
	}
	else
	{
		printf("%.2f , %.2f and %.2f have same values.\n",a,b,c);
	}
	return 0;
}
