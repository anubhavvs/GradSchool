#include<iostream> 
using namespace std;

class A
{
    protected:
	 	int x, y;
	public:
	 	void getdata()
	 	{
	   	    cout<<"Enter value of x and y:\n";
			cin>>x>>y;
	 	}
};
class B : public A
{
    public:
	 	void product()
	 	{
	 	    cout << "\nProduct= " << x * y<<endl;
	 	}
};
class C : public A
{
    public:
	 	void sum()
	 	{
	        cout << "\nSum= " << x + y<<endl;
	 	}
};
class D : public A
{
	public:
		void difference()
		{
			cout<<" \nDifference = "<<x-y<<endl;
		}
};
int main()
{
    B obj1;
    C obj2;
    D obj3;
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();
    obj3.getdata();
    obj3.difference();
    return 0;
}
