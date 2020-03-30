/* Write a program to search a number from 10 distinct numbers stored in a dynamic list. */

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int size,*p,value,flag=0,i;
    printf("Enter the number of elements:\n");
    scanf("%d",&size);
    p = (int *)malloc(size*sizeof(int));
    if(p==NULL){
        printf("Error! Not enough memory!\n");
		exit(0);
    }
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",p+i);
    }
    printf("Search for: ");
    scanf("%d",&value);
    for(i=0;i<size;i++)
    {
        if(value==*(p+i))
        {
            printf("%d is found at: %d.\n",value,i+1);
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        printf("Value is not present.\n");
    }
    return 0;
}

/* OUTPUT:
	Enter the number of elements:
	5
	Enter the elements:
	15
	27
	56
	90
	123
	Search for: 56
	56 is found at: 3.
*/
