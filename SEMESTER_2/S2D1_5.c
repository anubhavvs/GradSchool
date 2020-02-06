/*Write a C program to input your birth day, month and year in numeric format using structure and display total days as an output.*/

#include<stdio.h>

struct TIME {
	int date;
	int month;
	int year;
};

void difference(struct TIME birth, struct TIME current, struct TIME *diff){
	if (birth.date > current.date)
	{
		--current.month;
		current.date += 30;
	}
	diff->date = current.date - birth.date;
	if (birth.month > current.month)
	{
		--current.year;
		current.month += 12;
	}
	diff->month = current.month - birth.month;
	diff->year = current.year - birth.year;
}

int main()
{
	struct TIME birth, current, diff;
	printf("Enter birth date:\n");
	printf("Enter date, month and year:\n");
	scanf("%d %d %d",&birth.date,&birth.month,&birth.year);
	printf("Enter current date:\n");
	printf("Enter date, month and year:\n");
	scanf("%d %d %d",&current.date,&current.month,&current.year);

	difference(birth, current, &diff);

	printf("Day Difference:\n");
	printf("%d days, %d months, %d years\n",diff.date,diff.month,diff.year);
	return 0;
}

/* OUTPUT:
	Enter birth date:
	Enter date, month and year:
	9
	1
	2001
	Enter current date:
	Enter date, month and year:
	6
	2
	2020
	Day Difference:
	27 days, 0 months, 19 years
*/


