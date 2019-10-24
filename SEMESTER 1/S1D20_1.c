#include<stdio.h>
void search(int [],int);
int main()
{
	int a[10],s,i;
	printf("Enter 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nSearch for:\n");
	scanf("%d",&s);
	search(a,s);
	return 0;
}
void search(int m[],int n)
{
	int i,flag=0;
	for(i=0;i<10;i++)
	{
		if(m[i]==n)
		{
			printf("\nFound at positon %d.\n",i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("\nSearched value not found.\n");
}

/*OUTPUT:
	Enter 10 integer values:
	1
	2
	3
	4
	5
	6
	7
	8
	9
	10
	
	Search for:
	5
	
	Found at position 4.
*/
