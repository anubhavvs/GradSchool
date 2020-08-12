#include<stdio.h>
#include<stdlib.h>
#define N 10

struct cricketer {
	char name[20];
	int total_innings;
	int total_score;
	int total_wickets;
	int year;
	int month;
	int date;
};

struct cricketer ck[N];
int top=-1;

void push()
{
	struct cricketer x;
	if(top==N-1)
	{
		printf("Record is full\n");
	}
	else
	{	
		printf("Enter the name:\n");
		scanf("%s",&x.name);
		printf("Enter the total innings:\n");
		scanf("%d",&x.total_innings);
		printf("Enter the total score:\n");
		scanf("%d",&x.total_score);
		printf("Enter the total wickets:\n");
		scanf("%d",&x.total_wickets);
		printf("Enter the DOB(YYYY-MM-DD):\n");
		scanf("%d-%d-%d",&x.year,&x.month,&x.date);
		top++;
		ck[top]=x;
	}
}

void age(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year)
{
   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (birth_date > present_date) {
      present_date = present_date + month[birth_month - 1];
      present_month = present_month - 1;
   }
   if (birth_month > present_month) {
      present_year = present_year - 1;
      present_month = present_month + 12;
   }
   int final_date = present_date - birth_date;
   int final_month = present_month - birth_month;
   int final_year = present_year - birth_year;
   printf("Present Age: %d Years, %d Months, %d Days\n", final_year, final_month, final_date);
}

void category(int total_innings, int total_score, int total_wickets)
{
	float avg;
	avg = total_score/total_innings;
	
	if(total_innings < 30)
	{
		printf("New player\n");
	}
	else if(total_innings >= 30 && avg >= 40.00)
	{
		printf("Batsman\n");
	}
	else if(total_innings >= 30 && total_wickets>99)
	{
		printf("Bowler\n");
	}
	else if(total_innings>=30 && total_wickets<100 && avg<40)
	{
		printf("Need to improve\n");
	}
	
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("Record is empty.\n");
	}
	else
	{	
		printf("Record:\n");
		for(i=0;i<=top;i++)
		{
			printf("Name: %s\n",ck[i].name);
			printf("Total Innings: %d\n",ck[i].total_innings);
			printf("Total Score: %d\n",ck[i].total_score);
			printf("Total Wicket: %d\n",ck[i].total_wickets);
			printf("DOB: %d-%d-%d\n",ck[i].year, ck[i].month, ck[i].date);
			age(12, 8, 2020, ck[i].date, ck[i].month, ck[i].year);
			printf("Category: ");
			category(ck[i].total_innings, ck[i].total_score, ck[i].total_wickets);
			printf("\n\n");
		}
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("1. Enter record\n2. Display the record\n3. Exit\nYour choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("Invalid option.\n");
				break;
		}
	}
	return 0;
}
