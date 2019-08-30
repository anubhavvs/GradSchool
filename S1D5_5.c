#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	
	switch(num%2)
	{
		case 1:
			printf("Number is ODD!\n");
			break;
		case 0:
			printf("Number is EVEN!\n");
			break;
	}
}
