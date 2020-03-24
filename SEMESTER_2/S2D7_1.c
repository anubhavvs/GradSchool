/* Write a program to search a number from 10 distinct numbers using linear search. */

#include <stdio.h>

int main()
{
	int x[10],i,num,flag=0;
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
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("%d is present at position: %d.\n",num,i+1);
    }
    else
    {
        printf("%d is not present.\n",num);
    }
    return 0;
}

/* OUTPUT:
	Enter 10 numbers:
	12
	67
	45
	23
	9
	65
	109
	55
	32
	778
	Enter the number to search:
	9
	9 is present at position: 5.
*/
