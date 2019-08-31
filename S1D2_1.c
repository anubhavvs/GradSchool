#include<stdio.h>
#include<math.h>
int main()
{
	int base,power,res;
	printf("Enter the base:\n");
	scanf("%d",&base);
	printf("Enter the power:\n");
	scanf("%d",&power);
	
	res = pow(base, power);
	
	printf("Result is %d\n",res);
	
	return 0;
}
