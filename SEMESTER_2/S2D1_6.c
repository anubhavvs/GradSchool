/*Write a program to enter a Cartesian coordinate points and display the distance between them.*/

#include<stdio.h>
#include<math.h>

struct point{
	int x;
	int y;
}p1, p2, diff;

int main()
{
	int result;
	printf("1st point:\n");
	printf("Enter X and Y co-ordinates:\n");
	scanf("%d\n%d",&p1.x,&p1.y);
	printf("2nd point:\n");
	printf("Enter X and Y co-ordinates:\n");
	scanf("%d\n%d",&p2.x,&p2.y);

	diff.x = pow((p1.x - p2.x),2);
	diff.y = pow((p1.y - p2.y),2);

	result = sqrt(diff.x + diff.y);

	printf("Distance between the points:\n%d\n",result);
}

/* OUTPUT:
	1st point:
	Enter X and Y co-ordinates:
	6
	9
	2nd point:
	Enter X and Y co-ordinates:
	5
	4
	Distance between the points:
5
*/

