#include<iostream>

using namespace std;

class base1 {
	protected:
		int a, b;
	public:
		void input();
		void display();
};

void base1 :: input()
{
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
}

void base1 :: display()
{
	cout<<"\na: "<<a<<"\nb: "<<b<<endl;
}

class base2 {
	protected:
		int c;
	public:
		void input_c();
};

void base2 :: input_c()
{
	cout<<"Enter c: ";
	cin>>c;
}

class child : public base1, public base2 {
	private:
		int sum;
	public:
		void calculate();
		void show();
};

void child :: calculate()
{
	sum = a+b+c;
}

void child :: show()
{
	display();
	cout<<"c: "<<c<<endl;
	cout<<"Sum : "<<sum<<endl;
}

int main()
{
	child c;
	c.input();
	c.input_c();
	c.calculate();
	c.show();
	return 0;
}
