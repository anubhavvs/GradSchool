/*Write a C program to find largest element using dynamic memory allocation using calloc().*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p, i, n;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);

	p =(int *)calloc(n,sizeof(int));

	if(p==NULL){
		printf("Error! Not enough memory!");
		exit(0);
	}
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	int lnum = *p;
	for(i=1;i<n;i++)
	{
		if(*(p+i)>lnum)
		{
			lnum = *(p+i);
		}
	}
	printf("Largest Number:\n%d\n",lnum);
	return 0;
}

/* OUTPUT:
	Enter the number of elements:
	5
	Enter the numbers:
	20
	24
	58
	31
	01
	Largest Number:
	58
*/

