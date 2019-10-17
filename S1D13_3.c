#include<stdio.h>
int main()
{
	int x[10],i,num,flag;
	printf("Enter 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nSearch for value: ");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		if(num==x[i])
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	if(flag==1)
	{
		printf("Searched value is at index: %d\n",i);
	}
	else
	{
		printf("Value not present!\n");
	}
	return 0;
}
