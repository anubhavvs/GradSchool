#include<iostream>

using namespace std;

class test {
	private:
		int *a;
		int *b;
	public:
		void input(int *x, int *y);
		void swap();
		void display();
};

void test :: input(int *x, int *y)
{
	a = x;
	b = y;
}
void test :: swap()
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void test :: display()
{
	cout<<"x: "<<*a<<"\ny: "<<*b<<"\n";
}

int main()
{
	test t;
	int x=5, y=3;
	t.input(&x, &y);
	cout<<"Before swapping:\n";
	t.display();
	t.swap();
	cout<<"After swapping:\n";
	t.display();
	return 0;
}
