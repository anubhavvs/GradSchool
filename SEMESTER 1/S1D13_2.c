#include<stdio.h>
int main()
{
	float x[10],a;
	int i,j;
	printf("Enter 10 float values:\n");
	for(i=0;i<10;i++)
	{
		scanf("%f",&x[i]);
	}
	for(i=0;i<10;i++) 
    {
        for(j=i+1;j<10;j++) 
        {
            if(x[i]<x[j]) 
            {
                a=x[i];
                x[i]=x[j];
                x[j]=a;
            }
        }
    }
    printf("\nArray in descending order:\n");
    for(i=0;i<10;i++)
    {
    	printf("%.2f\n",x[i]);
	}
	return 0;
}

/*OUTPUT:
	Enter 10 float values:
	1
	2
	10
	5
	87
	14
	20
	158
	32
	27
	
	Array in descending order:
	158.00
	87.00
	32.00
	27.00
	20.00
	14.00
	5
	2
	1
*/
