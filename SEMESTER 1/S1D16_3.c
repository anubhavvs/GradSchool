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
		if(x[j]=='a' || x[j]=='A')
		{
			a++;
		}
		if(x[j]=='e' || x[j]=='E')
		{
			e++;
		}
		if(x[j]=='i' || x[j]=='I')
		{
			i++;
		}
		if(x[j]=='o' || x[j]=='O')
		{
			o++;
		}
		if(x[j]=='u' || x[j]=='U')
		{
			u++;
		}
	}
	printf("\nNumber of vowels present:\n");
	printf("a : %d\ne : %d\ni : %d\no : %d\nu : %d\n",a,e,i,o,u);
	
	return 0;
}

/*OUTPUT:
	Enter a word:
	facebook
	
	Number of vowels present:
	a: 1
	e: 1
	i: 0
	o: 2
	u: 0
*/
