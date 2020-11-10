#include<iostream>

using namespace std;

class test {
	private:
		int arr[10];
	public:
		void input();
		void search();
		void search(int p);
};

void test :: input()
{
	cout<<"Enter array elements:"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
}

void test :: search()
{
	cout<<"Odd elements:\n";
	for(int i=0;i<10; i++)
	{
		if(arr[i]%2 != 0)
		{
			cout<<arr[i]<<endl;
		}
	}
}

void test :: search(int p)
{
	int f;
	cout<<"Prime elements:\n";
	for(int i=0;i<10;i++)
	{
		f=1;
		for(int j=2; j<=arr[i]/2; j++)
		{
			if(arr[i]%j==0)
			{
				f=0;
				break;
			}
		}
		if(f==1)
		{
			cout<<arr[i]<<endl;
		}
	}
}

int main()
{
	test t;
	t.input();
	t.search();
	t.search(6);
	return 0;
}
