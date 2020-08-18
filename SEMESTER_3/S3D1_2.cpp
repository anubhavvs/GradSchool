#include<iostream>

using namespace std;

class myClass {
	private:
		int x;
		int y;
	public:
		void input()
		{
			cout<<"Enter x:\n";
			cin>>x;
			cout<<"Enter y:\n";
			cin>>y;
		}
		void output()
		{
			cout<<"x: "<<x<<"\n";
			cout<<"y: "<<y<<"\n";
		}
};

int main()
{
	myClass a, b;
	cout<<"For objct A:\n";
	a.input();
	a.output();
	cout<<"For object B:\n";
	b.input();
	b.output();
	return 0;
}
