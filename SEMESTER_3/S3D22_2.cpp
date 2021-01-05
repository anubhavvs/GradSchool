#include<iostream>

using namespace std;

class myClass {
	private:
		int x;
	public:
		myClass(int p)
		{
			x=p;
		}
		int operator >(myClass);
		int operator <(myClass);
};

int myClass :: operator >(myClass t)
{
	if(x > t.x)
		return 1;
	else
		return 0;
}

int myClass :: operator <(myClass t)
{
	if(x < t.x)
		return 1;
	else
		return 0;
}

int main()
{
	myClass m(1);
	myClass n(2);
	if(m>n)
		cout<<"m is greater"<<endl;
	if(n>m)
		cout<<"n is greater"<<endl;
	if(m<n)
		cout<<"m is smaller"<<endl;
	if(n<m)
		cout<<"n in smaller"<<endl;
	return 0;
}
