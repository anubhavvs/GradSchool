#include<stdio.h>
#include<string.h>
int main()
{
	char x[20],i,l,flag;
	printf("Enter a word:\n");
	gets(x);
	l=strlen(x);
	for(i=0;i<l;i++)
	{
		if(x[i]!=x[l-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\nNOT A PALINDROME\n");
	}
	else
	{
		printf("\nPALINDROME\n");
	}
	
	return 0;
}

/*OUTPUT:
	Enter a word:
	madam
	
	PALINDROME
*/
