//Reference variable in Cpp//

#include<iostream>

using namespace std;

class test {
	private:
		int a;
		int b;
	public:
		test(int x, int y);
		void show();
};

test :: test(int x, int y)
{
	a=x;
	b=y;
}

void test :: show()
{
	cout<<"a: "<<a<<"\nb: "<<b<<endl;
}

int main()
{
	test t(4, 6);
	
	test &p = t;
	p.show();
	
	return 0;
}


