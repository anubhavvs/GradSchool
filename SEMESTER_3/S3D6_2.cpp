// Class Student Array using OOP //

#include<iostream>
#define N 10

using namespace std;

class student {
	private:
		int roll;
		char name[10];
		int marks[5];
		int total;
	public:
		void input();
		void display();
		int cal_total();
};

void student :: input()
{
	cout<<"Enter Roll: ";
	cin>>roll;
	cout << "Enter name: ";
	cin>>name;
	total=0;
	cout << "Enter marks of 5 subjects:\n";
	for(int i=0;i<5;i++)
	{
		cin>>marks[i];
		total += marks[i];
	}
}

void student :: display()
{
	cout<<"Roll: "<<roll<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Total: "<<total<<endl; 
}

int student :: cal_total()
{
	return total;
}

int main()
{
	student t[N];
	int max, pos;
	
	for(int i=0; i<N; i++)
	{
		t[i].input();
	}
	max=t[0].cal_total();
	for(int i=1; i<N; i++)
	{
		if(t[i].cal_total() > max)
		{
			max = t[i].cal_total();
			pos = i;
		}
	}
	cout<<"\n\nTopper Information:\n\n";
	t[pos].display();
	
	return 0;
}

