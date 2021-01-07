#include<iostream>
using namespace std;

class test {
	private:
		int a,b;
	public:
		test(int,int);
		void show();
		void operator++(int);
};

test :: test(int x, int y)
{
	a = x;
	b = y;
}

void test :: show()
{
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}

void test :: operator++(int)
{
	a = a+1;
	b = b+1;
}

int main()
{
	test t(5,6);
	t.show();
	t++;
	t.show();
	return 0;
}


