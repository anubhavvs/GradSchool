#include<iostream>

using namespace std;

void calculate(int amt, float r=6.0, int yr=5)
{
	float MA = amt + ((amt*r*yr)/100);
	cout<<"Matured amout: "<<MA<<endl;
}

int main()
{
	int age, amt, y;
	cout<<"Enter age: ";
	cin>>age;
	cout<<"Enter amount: ";
	cin>>amt;
	if(age>=60)
	{
		if(amt >= 10000)
		{
			calculate(amt, 6.3);
		}
		else
		{
			cout<<"Enter years: ";
			cin>>y;
			if(y>1)
			{
				calculate(amt, 6.3, y);
			}
			else
			{
				cout<<"Time should be greater than 1 year";
			}
		}
	}
	else
	{
		if(amt >= 10000)
		{
			calculate(amt);
		}
		else
		{
			cout<<"Enter years: ";
			cin>>y;
			if(y>1)
			{
				calculate(amt, 6.0, y);
			}
			else
			{
				cout<<"Time should be greater than 1 year";
			}
		}
	}
	return 0;
}
