#include <iostream>

using namespace std;

class myClass {
	private:
		int a;
		int b;
	public:
		void init();
		void disp();
};

void myClass :: init()
{
	cout<<"Enter a:\n";
	cin>>a;
	cout<<"Enter b:\n";
	cin>>b;
}

void myClass :: disp()
{
	cout<<"a: "<<a<<"\n";
	cout<<"b: "<<b<<"\n";
}

int main()
{
	myClass obs[4];
	int i;
	for(i=0;i<4;i++)
	{
		obs[i].init();
	}
	for(i=0;i<4;i++)
	{
		obs[i].disp();
	}
	return 0;
}
