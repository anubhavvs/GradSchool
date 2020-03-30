/* Write a program to search a number from 10 numbers using interpolation search. */

#include <stdio.h>
int main()
{
    int x[20],i,size,flag=0;
    int value,low,high,mid;
    printf("Enter the number of elements:\n");
    scanf("%d",&size);
    printf("Enter the data:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Search for: ");
    scanf("%d",&value);
    low = 0;
    high = size-1;
    while (low <= high)
    {
        mid = low + (high - low)*((value-x[low])/(x[high]-x[low]));
        if (value==x[mid])
        {
            printf("%d is present at: %d\n",value,mid+1);
            flag=1;
            break;
        }
        else if(value<x[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if(flag==0)
    {
        printf("Value is not present.\n");
    }
    return 0;
}

/* OUTPUT:
	Enter the number of elements:
	5
	Enter the data:
	20
	23
	25
	28
	31
	Search for: 28
	28 is present at: 4
*/
