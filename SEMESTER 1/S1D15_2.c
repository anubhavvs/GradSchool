#include<stdio.h>
#include<string.h>
int main()
{
	char x[20];
	int i,r;
	printf("Enter any name:\n");
	gets(x);
	printf("\nResult:\n");
	for(i=strlen(x);i>=0;i--)
	{
		if(x[i]==' ')
		{
			r = i;
			break;
		}
	}
	printf("%c.",toupper(x[0]));
	for(i=1;i<r;i++)
	{
		if(x[i]==' ')
		{
			printf("%c.",toupper(x[i+1]));
		}
	}
	for(i=r+1;i<strlen(x);i++)
	{
		if(i==r+1)
		{
			printf("%c",toupper(x[i]));
		}
		else
		{
			printf("%c",tolower(x[i]));
		}
	}
	printf("\n");
	return 0;
}

/*OUTPUT:
	Enter any name:
	david beckham
	
	Result:
	D.Beckham
*/
