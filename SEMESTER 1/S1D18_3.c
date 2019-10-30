#include<stdio.h>
int sum(int x, int y)
{	
	return x+y;
}
int sub(int x, int y)
{
	return x-y;
}
int mul(int x, int y)
{
	return x*y;
}
int div(int x, int y)
{
	return x/y;
}
int main()
{
	int ch,a,b,res;
	printf("Enter the two numbers:\n");
	scanf("%d\n%d",&a,&b);
	do
	{
		printf("Choose from the following:\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
		printf("Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				res = sum(a,b);
				printf("The sum is %d.\n",res);
				break;
			case 2:
				res = sub(a,b);
				printf("The difference is %d.\n",res);
				break;
			case 3:
				res = mul(a,b);
				printf("The product is %d.\n",res);
				break;
			case 4:
				res = div(a,b);
				printf("The division is %d.\n",res);
				break;
		}
	}while(ch!=5);
	
	return 0;
}

/*OUTPUT:
	Enter the two numbers:
	100
	20
	Choose from the following:
	1. Addition
	2. Subtraction
	3. Multiplication
	4. Division
	5. Exit
	Your choice: 2
	The difference is 80.
*/
