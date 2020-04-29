/* Write a program to sort 10 numbers using quick sort. */

#include<stdio.h>
#define n 5

void quicksort(int x[n],int first,int last)
{
   int i, j, pivot, temp;
   if(first<last)
   {
      pivot=first;
      i=first;
      j=last;
      while(i<j)
	  {
         while(x[i]<=x[pivot]&&i<last)
         {
         	i++;
		 }
         while(x[j]>x[pivot])
         {
         	j--;
		 }
         if(i<j)
		 {
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
         }
      }
      temp=x[pivot];
      x[pivot]=x[j];
      x[j]=temp;
      quicksort(x,first,j-1);
      quicksort(x,j+1,last);
   }
}

int main()
{
   int i, x[25];
   printf("Enter the elements:\n");
   for(i=0;i<n;i++)
   {
   		scanf("%d",&x[i]);
   }
   quicksort(x,0,n-1);
   printf("Sorted List:\n");
   for(i=0;i<n;i++)
   {
   		printf("%d, ",x[i]);
   }
   return 0;
}

/* OUTPUT:
	Enter the elements:
	5
	2
	1
	7
	8
	Sorted List:
	1, 2, 5, 7, 8,
*/
