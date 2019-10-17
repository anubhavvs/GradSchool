#include<stdio.h>
int main()
{
	float x[10],a;
	int i,j;
	printf("Enter the values:\n");
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
