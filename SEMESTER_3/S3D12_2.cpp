#include<iostream>

using namespace std;

class test {
	private:
		int x;
		int y;
	public:
		test(int a, int b);
		friend void display(test);
};

test :: test(int a, int b)
{
	x=a;
	y=b;
}

void display(test t)
{
	cout<<"x: "<<t.x<<"\ny: "<<t.y<<endl;
}

int main()
{
	test m(1, 2);
	display(m);
	return 0;
}
