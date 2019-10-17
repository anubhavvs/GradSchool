#include<stdio.h>
#include<string.h>
int main()
{
	char x[20];
	int j,a=0,e=0,i=0,o=0,u=0;
	printf("Enter a word:\n");
	gets(x);
	for(j=strlen(x)-1;j>=0;j--)
	{
		if(x[j]=='a')
		{
			a++;
		}
		if(x[j]=='e')
		{
			e++;
		}
		if(x[j]=='i')
		{
			i++;
		}
		if(x[j]=='o')
		{
			o++;
		}
		if(x[j]=='u')
		{
			u++;
		}
	}
	printf("\nNumber of vowels present:\n");
	printf("a : %d\ne : %d\ni : %d\no : %d\nu : %d\n",a,e,i,o,u);
	
	return 0;
}
