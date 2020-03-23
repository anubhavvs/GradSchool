/* Write a program to insert data in a sorted array. */

#include<stdio.h>

int main()
{
    int arr[20];
    int i,j,num,n,p;
    printf("Enter the size of the array:\n"); 
    scanf("%d",&n);
    printf("Enter the array elements in sorted form:\n");
  	for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("Enter the number to be inserted:\n") ;
    scanf ("%d",&num);
  	i=n-1;
    while(num<arr[i] && i>=0)
    {
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = num;
    n++;
    printf("Array after insertion of %d:\n", num);
    for(i=0;i<n;i++)
    {
		printf("%d, ",arr[i]);
    }
    return 0;
}

/* OUTPUT:
	Enter the size of the array:
	5
	Enter the array elements in sorted form:
	10
	12
	15
	19
	45
	Enter the number to be inserted:
	23
	Array after insertion of 23:
	10, 12, 15, 19, 23, 45,
*/
