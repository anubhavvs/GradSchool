#include<iostream>

using namespace std;

class test {
	private:
		int a[10];
		int b;
	public:
		test(int x);
		int calculate();
};

test :: test(int x)
{
	b=x;
}

int test :: calculate()
{
	cout<<"Enter elements:\n";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	int count=0;
	for(int i=0;i<10;i++)
	{
		if(a[i]==b)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	test obj(5);
	cout<<"Frequency of 5: " << obj.calculate();
}
