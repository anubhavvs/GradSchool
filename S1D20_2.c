#include<stdio.h>
int fact(int);
int main()
{
	int n,a;
	printf("Enter a number:\n");
	scanf("%d",&n);
	a=fact(n);
	printf("\nFactorial of %d is %d.\n",n,a);
	return 0;
}

int fact(int m)
{
	if(m==1)
	{
		return 1;
	}
	else
	{
		return m*fact(m-1);
	}
}
