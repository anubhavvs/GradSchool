#include<iostream>
using namespace std;

class test {
	private:
		int a,b;
	public:
		test(int,int);
		void show();
		void operator-();
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

void test :: operator-()
{
	a = -a;
	b = -b;
}

int main()
{
	test t(1,2);
	t.show();
	-t;
	t.show();
	return 0;
}

