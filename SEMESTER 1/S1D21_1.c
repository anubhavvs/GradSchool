#include<stdio.h>
int lenofstring(char *string)
{
	int len=0;
	while (*string!='\0')
	{
		len++;
		string++;
	}
	
	return len;
}
int main()
{
	char string[20];
	int len;
	printf("Enter a string:\n");
	gets(string);
	len = lenofstring(string);
	printf("\nLenth of the string is %d.\n",len);
	
	return 0;
}

/*OUTPUT:
	Enter a string:
	hello
	
	Length of the string is 5.
*/
