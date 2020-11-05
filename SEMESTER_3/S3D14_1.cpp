#include<iostream>
#include<string.h>

using namespace std;

int add(int *p)
{
	int i, sum=0;
	for(i=0;i<3;i++)
	{
		sum += *p;
		p++;
	}
	return sum;
}

void add(char *p, char *q)
{
	while(*p != '\0')
	{
		p++;
	}
	while(*q != '\0')
	{
		*p=*q;
		p++;
		q++;
	}
}

int main()
{
	int arr[3],i,res;
	char arr1[20], arr2[10];
	
	cout<<"Enter integer array:"<<endl;
	for(i=0;i<3;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter 1st string:"<<endl;
	fflush(stdin);
	gets(arr1);
	cout<<"Enter 2nd string:"<<endl;
	fflush(stdin);
	gets(arr2);
	
	res = add(arr);
	add(arr1, arr2);
	cout<<"Sum of integer array: "<<res<<endl;
	cout<<"Concatenated string: "<<arr1;
	
	return 0;
}
