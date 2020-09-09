/* Default constructor in CPP*/

#include<iostream>

using namespace std;

class construct {
	public:
		int a, b;
		construct()
		{
			a = 10;
			b = 20;
		}
};

int main()
{ 
	construct obj1, obj2;
	cout << "For 1st Object:\na: "<<obj1.a<<"\nb: "<<obj1.b<<endl;
	cout << "For 2nd Object:\na: "<<obj2.a<<"\nb: "<<obj2.b;
	return 0;
}

