#include<stdio.h>
int main()
{
	int ch;
	printf("Enter the character:\n");
	scanf("%c",&ch);
	if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		switch(ch)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("It is a vowel.\n");
				break;
				
			default:
				printf("It is a consonant.\n");
		}
	}
	else
	{
		printf("Enter only alphabets!\n");
	}
}
