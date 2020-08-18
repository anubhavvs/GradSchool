#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char x[15], key;
	int i, count=0;
	cout<<"Enter the charecter array:\n";
	gets(x);
	cout<<"Enter the search key: ";
	cin>>key;
	for(i=0;i<strlen(x);i++)
	{
		if(x[i]==key)
		{
			count++;
		}
	}
	if(count==0)
	{
		cout<<"No match found.\n";
	}
	else
	{
		cout<<"Frequency of "<<key<<": "<<count;
	}
	return 0;
}
