#include<stdio.h>
#include<string.h>
int main()
{
	char x[20];
	int i,count=0;
	printf("Enter a word:\n");
	gets(x);
	for(i=strlen(x)-1;i>=0;i--)
	{
		if(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'||x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
		{
			count++;
		}
	}
	printf("\nNumber of vowels present: %d\n",count);
	
	return 0;
}

/*OUTPUT:
	Enter a word:
	facebook
	
	Number of vowels present: 4
*/
