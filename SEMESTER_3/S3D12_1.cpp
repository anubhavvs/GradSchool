#include<iostream>

using namespace std;

class test {
	private:
		int x;
		int y;
	public:
		test(int a, int b);
		inline void display();
};

test :: test(int a, int b)
{
	x=a;
	y=b;
}

void test :: display()
{
	cout<<"x: "<<x<<"\ny: "<<y<<endl;
}

int main()
{
	test t(1, 2);
	t.display();
	return 0;
}
