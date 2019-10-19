#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter two Integer Values: \n");
	scanf("%d\n%d",&n1,&n2);
	
	printf("Sum : %d\n",n1+n2);
	printf("Difference : %d\n",n1-n2);
	printf("Product : %d\n",n1*n2);
	printf("Division : %d\n",n1/n2);
	
	return 0;
}


/* OUTPUT:

	Enter two Integer Values:
	10
	20
	Sum : 30
	Difference : -10
	Product : 200
	Division : 0
*/
