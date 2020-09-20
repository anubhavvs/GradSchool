#include<iostream>

using namespace std;

class test {
	public:
		test() {
			cout<<"Constructor called."<<endl;
		}
		~test() {
			cout<<"Destructor called."<<endl;
		}
		void output() {
			cout<<"Hello World!"<<endl;
		}
};

int main()
{
	test obj;
	obj.output();
	return 0;
}
