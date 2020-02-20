/*Write a C program to reverse a string using stack.*/

#include<string.h>
#include<stdio.h>

char stk[10];
char arr[10];
int top=-1;

void push(char x)
{
	top++;
	stk[top]=x;
}

char pop()
{
	return (stk[top--]);
}

int main()
{
	int i;
	printf("Enter a string:\n");
	gets(arr);
	for(i=0;i<strlen(arr);i++)
	{
		push(arr[i]);
	}
	for(i=0;i<strlen(arr);i++)
	{
		arr[i] = pop();
	}
	printf("Reversed String:\n");
	puts(arr);
	return 0;
}

/* OUTPUT:
	Enter a string:
	anubhavvs
	Reversed String:
	svvahbuna
*/
