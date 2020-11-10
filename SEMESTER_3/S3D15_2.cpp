//Constructor Overloading

#include<iostream>

using namespace std;

class test {
	private:
		int x;
		int y;
	public:
		test(int x1, int x2)
		{
			x=x1;
			y=x2;
		}
		test(const test &p2)
		{
			x=p2.x;
			y=p2.y;
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
	test p1(10, 15);
	test p2 = p1;
	
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY(); 
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();
    
    return 0;
}
