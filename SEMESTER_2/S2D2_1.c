/*Write a C program to find sum of n elements entered by user. To perform this program, allocate memory
dynamically using malloc() function.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, *p, i, sum=0;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	p = (int *) malloc(n*sizeof(int));
	if(p==NULL){
		printf("Error! Not enough memory!\n");
		exit(0);
	}
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",p+i);
		sum += *(p+i);
	}
	printf("Sum of %d numbers are: %d\n",n,sum);
	free(p);
}

/* OUTPUT:
	Enter number of elements:
	5
	Enter the elements:
	10
	12
	14
	16
	20
	Sum of 5 numbers are: 72
*/

