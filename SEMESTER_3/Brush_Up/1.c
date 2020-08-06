/*Create a user defined type students with roll, name and marks of 5 subjects. Initialize each member from user by user defined function. Then determine and display the topper of the students. Assume there are 10 students in the class.*/

#define N 10
#include<stdio.h>

struct student {
	char name[20];
	int roll;
	int marks[5];
	int sum;
};

void input(struct student st[N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		st[i].sum=0;
		printf("Enter the details for %d student:\n",i+1);
		printf("Name: ");
		scanf("%s",&st[i].name);
		printf("Roll: ");
		scanf("%d",&st[i].roll);
		printf("Enter marks:\n");
		for(j=0;j<5;j++)
		{
			scanf("%d",&st[i].marks[j]);
			st[i].sum += st[i].marks[j];
		}
	}
}

int main()
{
	struct student st[N];
	struct student topper;
	input(st);
	int i,j, max=0;
	for(i=0;i<N;i++)
	{
		if(st[i].sum >= max)
		{
			max = st[i].sum;
			topper = st[i];
		}
	}
	printf("Topper:\nName: %s\nMarks: %d\n",topper.name,topper.sum);
	return 0;
}
