//Linear Search using Class in C++//

#include<iostream>
#define N 5

using namespace std;

class Lsearch
{
	private:
		int x[N];
		int key;
	public:
		void input();
		void search();
};

void Lsearch :: input()
{
	cout<< "Enter the array data:\n";
	for(int i=0; i<N; i++)
	{
		cin>>x[i];
	}
	cout<<"Enter the key to search: ";
	cin>>key;
}

void Lsearch :: search()
{
	int flag=0, i;
	for(i=0; i<N; i++)
	{
		if(x[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		cout <<key<<" is found at position "<<i+1<<".\n";
	}
	else
	{
		cout <<key<<" not found.\n";
	}
}

int main()
{
	Lsearch obj;
	obj.input();
	obj.search();
	return 0;
}
