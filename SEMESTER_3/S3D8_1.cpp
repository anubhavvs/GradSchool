#include<iostream>

using namespace std;

class circle {
	private:
		float radius;
		float area;
	public:
		circle(float p);
		void calculate();
		void show();
};

circle :: circle(float p)
{
	radius = p;
}

void circle :: calculate()
{
	area = 3.14*radius*radius;
}

void circle :: show()
{
	cout<<"Radius: "<<radius<<"\nArea: "<<area<<endl;
}

int main()
{
	circle c(6.78);
	c.calculate();
	c.show();
	return 0;
}
