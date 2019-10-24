#include<stdio.h>
int main()
{
	char ch;
	printf("Please Enter the gender: (m / M and f / F):\n");
	scanf("%c",&ch);
	
	switch (ch)
	{
		case 'f':
		case 'F':
			printf("FEMALE\n");
			break;
		case 'm':
		case 'M':
			printf("MALE\n");
			break;
		default:
			printf("Unsupported input!\n");
	}
	
	return 0;
}

/*OUTPUT:
	Please Enter the gender: (m / M and f / F):
	m
	MALE
*/
