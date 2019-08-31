#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a charecter:\n");
	scanf("%c",&ch);
	printf("Entered charecter is:\n");
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("ALPHABET\n");
	}
	else if(ch>='0' && ch<= '9')
	{
		printf("DIGIT\n");
	}
	else
	{
		printf("SPECIAL CHARECTER\n");
	}
	
	return 0;
}
