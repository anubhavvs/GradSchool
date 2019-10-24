#include<stdio.h>
int main()
{
	int n;
	printf("Enter a month number:\n");
	scanf("%d",&n);
	if(n<=12 && n>0)
	{
		switch(n)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("Number of days are 31\n");
				break;
				
			case 2:
				printf("Number of days are 28\n");
				break;
			
			case 4:
			case 6:
			case 9:
			case 11:
				printf("Number of days are 30\n");
		}
	}
	else
	{
		printf("Enter only valid month number!\n");
	}
}

/*OUTPUT:
	Enter a month number:
	7
	Number of days are 31
*/
