#include<iostream>

using namespace std;

class test {
	private:
		int arr[9];
	public:
		void input();
		void search(int x);
		void search();
};

void test :: input()
{
	cout<<"Enter array elements:"<<endl;
	for(int i=0;i<9;i++)
	{
		cin>>arr[i];
	}
}

void test :: search(int x)
{
	int i, p, f=0;
	for(i=0;i<9;i++)
	{
		if(arr[i]==x)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		cout<<x<<" found at position "<<i<<endl;
	}
	else
	{
		cout<<"Data not found.\n";
	}
}

void test :: search()
{
	int i, c=0;
	cout<<"Elements less than mid value:\n";
	for(i=0; i<9;i++)
	{
		if(arr[i]<arr[4])
		{
			c++;
			cout<<arr[i]<<endl;
		}
	}
	if(c==0)
	{
		cout<<"Mid value is the minimum,\n";
	}
}

int main()
{
	test t;
	t.input();
	t.search(10);
	t.search();
	return 0;
}
