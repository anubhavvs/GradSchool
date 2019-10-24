#include<stdio.h>
int main()
{
	int n,i,t1=0,t2=1,t;
	printf("Enter the number of terms:\n");
	scanf("%d",&n);
	printf("Fibonacci Series:\n");
	for(i=1;i<=n;i++)
	{
		if(i!=n)
			printf("%d, ",t1);
		else
			printf("%d.",t1);
		t = t1+t2;
		t1 = t2;
		t2 = t;
	}
	return 0;
}

/*OUTPUT:
	Enter the number of terms:
	10
	Fibonacci Series:
	0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
*/
