#include<iostream>

using namespace std;

int sum(int a, int b, int c=6, int d=10)
{
	return (a+b+c+d);
}

int main()
{
	int w=5;
	int x=4;
	int y=10;
	int z=20;
	cout<<sum(w, x)<<endl;
	cout<<sum(w, x, y)<<endl;
	cout<<sum(w, x, y, z)<<endl;
	return 0;
}
