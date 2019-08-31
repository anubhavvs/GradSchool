#include<stdio.h>
int main()
{
	int days,weeks,years;
	printf("Enter the number of days:\n");
	scanf("%d",&days);
	
    years = (days / 365);
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));
    
    printf("\nYear : %d\nWeek : %d\nDays : %d\n",years,weeks,days);
    return 0;
}
