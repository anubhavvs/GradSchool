#include<stdio.h>
int main()
{
	int x[10],i;
	printf("Enter 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Reversed Order:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",x[9-i]);
	}
	return 0;
}

/*OUTPUT:
	Enter 10 integer values:
	12
	32
	56
	98
	54
	78
	14
	23
	10
	Reversed Order:
	10
	23
	14
	78
	54
	98
	56
	32
	12
*/
