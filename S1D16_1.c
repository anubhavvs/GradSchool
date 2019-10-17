#include<stdio.h>
#include<string.h>
int main()
{
	char x[20];
	int i;
	printf("Enter a word:\n");
	gets(x);
	printf("\nReversed:\n");
	for(i=strlen(x)-1;i>=0;i--)
	{
		printf("%c",x[i]);
	}
	return 0;
}
