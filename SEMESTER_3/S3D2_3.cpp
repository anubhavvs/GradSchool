#include<iostream>

using namespace std;

class test {
	private:
		int a;
		int b;
	public:
		void input(int x, int y);
		int exp();
};

void test :: input(int x, int y)
{
	a=x;
	b=y;
}

int test :: exp()
{
	int i, res=1;
	for(i=1;i<=b;i++)
		res *= a;
	cout<<"Result: "<<res;
}

int main()
{
	test t;
	int a, b;
	cout<<"Enter base and exponent:\n";
	cin>>a>>b;
	t.input(a, b);
	t.exp();
	return 0;
}
