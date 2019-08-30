#include<stdio.h>
#include<math.h>
int main()
{
	float num1, num2;
	char ch;
	printf("Enter the desired operation (+, -, *, /, %):\n");
	scanf("%c",&ch);
	printf("Enter the two number:\n");
	scanf("%f\n%f",&num1,&num2);
	printf("\nRESULT :\n");
	switch(ch)
	{
		case '+':
			printf("%.2f  +  %.2f  =  %.2f\n",num1,num2,num1+num2);
			break;
		
		case '-':
			printf("%.2f  -  %.2f  =  %.2f\n",num1,num2,num1-num2);
			break;
		
		case '*':
			printf("%.2f  *  %.2f  =  %.2f\n",num1,num2,num1*num2);
			break;
		
		case '/':
			printf("%.2f  /  %.2f  =  %.2f\n",num1,num2,num1/num2);
			break;
			
		case '%':
			printf("%.2f  %  %.2f  =  %d\n",num1,num2,(int)num1%(int)num2);
			break;
		
		default:
			printf("Choose from list only!\n");
	}
	
	return 0;
}
