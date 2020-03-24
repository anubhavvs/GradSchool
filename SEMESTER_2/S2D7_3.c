/* Write a program to search a number from 10 numbers using binary search. */

#include <stdio.h>
int main()
{
  int i,first, last, middle, num, x[10];
  printf("Enter 10 integers:\n");
  for (i=0;i<10;i++)
  {
      scanf("%d", &x[i]);
  }
  printf("Enter the number to search:\n");
  scanf("%d", &num);
  first = 0;
  last = 10-1;
  middle = (first+last)/2;

  while (first <= last)
  {
      if (x[middle] < num)
      {
          first = middle + 1;
      }
      else if (x[middle] == num)
      {
          printf("%d is present at position: %d.\n", num, middle+1);
          break;
      }
      else
      {
          last = middle - 1;
      }
      middle = (first + last)/2;
  }
    if (first > last)
    {
        printf("%d is not present.\n", num);
    }
    return 0;
}

/* OUTPUT :
	Enter 10 integers:
	12
	34
	56
	78
	89
	92
	187
	343
	567
	1096
	Enter the number to search:
	92
	92 is present at position: 6.
*/
