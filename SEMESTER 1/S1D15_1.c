#include<stdio.h>
#include<string.h>
int main()
{
	char x[20];
	int i;
	printf("Enter any name:\n");
	gets(x);
	printf("\nResult:\n");
	printf("%c.",toupper(x[0]));
	for(i=1;i<strlen(x);i++)
	{
		if(x[i]==' ')
		{
			printf("%c.",toupper(x[i+1]));
		}
	}
	printf("\n");
	return 0;
}

/*OUTPUT:
	Enter any name:
	Tony Stark
	
	Result:
	T.S.
*/
