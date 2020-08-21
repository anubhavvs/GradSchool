#include<iostream>

using namespace std;

class test {
	private:
		int a,b,c;
	public:
		void input(int a, int b, int c);
		int max();
};

void test :: input(int x, int y, int z)
{
	a=x;
	b=y;
	c=z;
}

int test :: max()
{	
	int count=0, max;
	if(a>=b && a>=c)
        max = a;
    if(b >= a && b >= c)
        max = b;
    if(c >= a && c >= b)
    	max = c;
    count = (max==b) + (max==c) + (max==a);
    cout << "Largest number: " << max;
    cout << "\nFrequency: " << count;
}

int main()
{
	test t;
	int a,b,c;
	cout<<"Enter three numbers:\n";
	cin>>a>>b>>c;
	t.input(a, b, c);
	t.max();
	return 0;
}
