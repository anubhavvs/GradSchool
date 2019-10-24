#include<stdio.h>
#include<math.h>
int main()
{
	int num,tnum,sum=0,rem,count=0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	tnum = num;
	while(num!=0)
	{
		rem = num%10;
		num = num/10;
		count++;
	}
	num=tnum;
	while(num!=0)
	{
		rem = num%10;
		sum = sum + pow(rem,count);
		num = num/10;
	}
	if(sum==tnum)
	{
		printf("\n%d is an Armstrong Number!\n",tnum);
	}
	else
	{
		printf("\n%d is not an Armstrong Number!\n",tnum);
	}
	
	return 0;
}

/*OUTPUT:
	Enter a number:
	1634
	
	1634 is an Armstrong Number!
*/
