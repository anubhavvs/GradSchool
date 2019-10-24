#include<stdio.h>
int main()
{
	char grade;
	printf("Enter grade (A, B, C, D, F):\n");
	scanf("%c",&grade);
	switch(grade)
	{
		case 'a':
		case 'A':
			printf("Excellent!\n");
			break;
		case 'b':
		case 'c':
		case 'B':
		case 'C':
			printf("Well Done!\n");
			break;
		case 'd':
		case 'D':
			printf("You Passed.\n");
			break;
		case 'f':
		case 'F':
			printf("Better try again!\n");
			break;
		default:
			printf("Enter valid grade!/n");
	}
}

/*OUTPUT:
	Enter grade (A, B, C, D, F):
	B
	Well Done!
*/
