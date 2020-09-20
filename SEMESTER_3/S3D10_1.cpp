/* Dynamic Constructors in Cpp */

#include<iostream>

using namespace std;

class test {
	private:
		const char* p;

	public: 
		test() 
		{
			p = new char[10]; 
			p = "Hello World!"; 
		} 
	
		void display() 
		{ 
			cout<<p<<endl; 
		} 
}; 

int main() 
{ 
	test * obj = new test();
	obj->display();
	return 0;
} 

