#include<stdio.h>
#include<string.h>
int main()
{
	char x[10],y[10],z[10];
	int i,j,k;
	printf("Enter first 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter second 10 integer values:\n");
	for(j=0;j<10;j++)
	{
		scanf("%d",&y[j]);
	}
	printf("Result array:\n");
	for(k=0,i=0,j=0;k<10;k++,i++,j++)
	{
		z[k]=x[i]+y[j];
		printf("%d\n",z[k]);
	}
	
	return 0;
}
