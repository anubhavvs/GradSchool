#include<iostream>

using namespace std;

class parent {
	protected:
		int x, y;
	public:
		void input();
		void show();
};

void parent :: input()
{
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter y: ";
	cin>>y;
}

void parent :: show()
{
	cout<<"Value of x: "<<x<<endl;
	cout<<"Value of y: "<<y<<endl;
}

class child : public parent {
	private:
		int z;
	public:
		void input_z();
		void add();
};

void child :: input_z()
{
	cout<<"Enter z: ";
	cin>>z;
}

void child :: add()
{
	int s = x+y+z;
	cout<<"Sum: "<<s<<endl;
}

int main()
{
	child c;
	
	c.input();
	c.input_z();
	c.show();
	c.add();
	
	return 0;
}
