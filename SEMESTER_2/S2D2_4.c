/*Write a C program to demonstrate the dynamic memory allocation using realloc.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, *p, *p2, i, n2;
	printf("Enter the number of data:\n");
	scanf("%d",&n);
	p = (int *) malloc(n*sizeof(int));
	if(p == NULL){
		printf("Error! Not enough memory");
		exit(0);
	}
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("Present data:\n");
	for(i=0;i<n;i++)
	{
		printf("%d, ",*(p+i));
	}
	printf("\n");
	printf("Enter the new number of data:\n");
	scanf("%d", &n2);
	p2 = (int *) realloc(p, n2*sizeof(int));
	if(p2 == NULL){
		printf("Error! Not enough memory");
		exit(0);
	}
	printf("Enter the elements:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",p2+i);
	}
	printf("Present data:\n");
	for(i=0;i<n2;i++)
	{
		printf("%d, ",*(p2+i));
	}
	printf("\n");
	return 0;
}

/* OUTPUT:
	Enter the number of data:
	3
	Enter the elements:
	25
	14
	10
	Present data:
	25, 14, 10,
	Enter the new number of data:
	5
	Enter the elements:
	188
	485
	102
	7520
	369
	Present data:
	188, 485, 102, 7520, 369,
*/

