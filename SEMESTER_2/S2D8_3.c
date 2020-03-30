/* Write a program to demonstrate the frequency of all distinct number stored in a list. */

#include <stdio.h>
int main()
{
    int arr[20], freq[20];
    int size, i, j, count;
    printf("Enter the number of elements:\n");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
    printf("Frequency of all elements of array:\n");
    for(i=0;i<size;i++)
    {
        if(freq[i]!=0)
        {
            printf("%d: %d times\n", arr[i],freq[i]);
        }
    }
    return 0;
}

/* OUTPUT :
	Enter the number of elements:
	7
	Enter the elements:
	34
	23
	56
	34
	34
	23
	90
	Frequency of all elements of array:
	34: 3 times
	23: 2 times
	56: 1 times
	90: 1 times
*/
