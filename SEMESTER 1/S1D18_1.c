#include<stdio.h>
int x, y;
void sum()
{
	printf("Enter two numbers for addition:\n");
	scanf("%d\n%d",&x,&y);
	printf("The sum is %d\n",x+y);
}
void sub()
{
	printf("Enter two numbers for subtraction:\n");
	scanf("%d\n%d",&x,&y);
	printf("The difference is %d\n",x-y);
}
void mult()
{
	printf("Enter two numbers for multiplication:\n");
	scanf("%d\n%d",&x,&y);
	printf("The product is %d\n",x*y);
}
void div()
{
	printf("Enter two numbers for division:\n");
	scanf("%d\n%d",&x,&y);
	printf("The division is %d\n",x/y);
}
int main()
{
	int ch;  
	while(1)
	{
        	printf("Choose from below:\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");     
		printf("Enter your choice: ");
        	scanf("%d",&ch); 
       		if(ch==1)
            		sum();      
  		if(ch==2)
            		sub();     
   		if(ch==3)     
       			mult();  
      		if(ch==4)  
          		div(); 
      		if(ch==5)  
          		break;
    	}	
 	return 0;
}

/*OUTPUT:
	Choose from below:
	1. Addition
	2. Subtraction
	3. Multiplication
	4. Division
	5. Exit
	Enter your choice: 4
	Enter two number for multiplication:
	10
	20
	The product is 200
*/
