/* Parameterized constructors in CPP*/

#include<iostream>

using namespace std;

class construct {
	private:
		int x, y;
	public:
		construct(int x1, int y1)
		{
			x = x1;
			y = y1;
		}
		int getX()
		{
			return x;
		}
		int getY()
		{ 
			return y;
		}
};

int main() 
{
	construct obj1(10, 15);
	construct obj2(60, 30);

	cout << "For 1st Object:\nx: "<<obj1.getX()<<"\ny: "<<obj1.getY()<<endl;
	cout << "For 2nd Object:\nx: "<<obj2.getX()<<"\ny: "<<obj2.getY();

	return 0; 
} 

