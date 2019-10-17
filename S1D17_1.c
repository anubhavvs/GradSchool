#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int i,count=0;
	printf("Enter a sentence:\n");
	gets(x);
	for(i=strlen(x)-1;i>=0;i--)
	{
		if(x[i]==' ')
		{
			count++;
		}
	}
	printf("\nNumber of white spaces: %d\n",count);
	return 0;
}
