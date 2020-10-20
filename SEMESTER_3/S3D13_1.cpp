#include<iostream>

using namespace std;

class second;

class first {
	private:
		int x;
	public:
		first(int p);
		void friend compare(first &m, second &n);
};

class second {
	private:
		int y;
	public:
		second(int p);
		void friend compare(first &m, second &n);
};

first :: first(int p) {
	x=p;
}

second :: second(int p) {
	y=p;
}

void compare(first &m, second &n) {
	if(m.x > n.y) {
		cout<<"x is greater."<<endl;
	}
	else if(m.x < n.y) {
		cout<<"y is greater"<<endl;
	}
	else {
		cout<<"both are equal."<<endl;
	}
}

int main()
{
	first f(10);
	second s(20);
	
	compare(f, s);
	return 0;
}
