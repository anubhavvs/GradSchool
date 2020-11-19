#include<iostream>

using namespace std;

class level3 {
	protected:
		int x;
	public:
		void input_x();
};

void level3 :: input_x()
{
	cout<<"Enter x: ";
	cin>>x;
}

class level2 : public level3 {
	protected:
		int y;
	public:
		void input_y();
};

void level2 :: input_y()
{
	cout<<"Enter y: ";
	cin>>y;
}

class level1 : public level2 {
	protected:
		int z;
	public:
		void input_z();
		int product();
};

void level1 :: input_z()
{
	cout<<"Enter z: ";
	cin>>z;
}

int level1 :: product()
{
	int p;
	p=x*y*z;
	return p;
}

int main()
{
	level1 obj;
	
	obj.input_x();
	obj.input_y();
	obj.input_z();
	cout<<"Product: "<<obj.product();
	return 0;
}
