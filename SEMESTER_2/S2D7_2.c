/* Write a program to search a number from 10 numbers using linear search and show the occurrence of the search item. */

#include <stdio.h>

int main()
{
    int x[10],i,num,count=0;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter the number to search:\n");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(num==x[i])
        {
	    	printf("%d is present at position: %d.\n",num,i+1);
            count++;
        }
    }
    if(count==0)
    {
        printf("%d is not present.\n",num);
    }
    return 0;
}

/* OUTPUT:
	Enter 10 numbers:
	12
	76
	45
	12
	9
	65
	34
	21
	55
	12
	Enter the number to search:
	12
	12 is present at position: 1.
	12 is present at position: 4.
	12 is present at position: 10.
*/

