#include<iostream>

using namespace std;

class cricket {
	private:
		char name[20];
		int inn;
		int n_inn;
		int score;
		int wic;
	public:
		void input();
		void sort();
		void display();
};

void cricket :: input()
{
	cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter innings: ";
    cin>>inn;
    cout<<"Enter no of not out innings: ";
    cin>>n_inn;
    cout<<"Enter total runs: ";
    cin>>score;
    cout<<"Enter total wickets taken: ";
    cin>>wic;
}

void cricket :: sort()
{
	if(inn>=50)
	{
		if(score/inn>=35 && wic>49)
		{
			cout<<"ALL ROUNDER\n";
		}
		if(wic>49 && score/inn<35)
		{
			cout<<"BOWLER\n";
		}
		if(score/inn>=35 && wic<=49)
		{
			cout<<"BATSMAN\n";
		}
	}
	else
	{
		cout<<"Not Valid.\n";
	}
}

void cricket :: display()
{
	cout<<"\nName : "<<name;
    cout<<"\nInnings: "<<inn;
    cout<<"\nNo of not out innings: "<<n_inn;
    cout<<"\nTotal runs: "<<score;
    cout<<"\nTotal wickets taken: "<<wic;
    cout<<"\nCategory: ";
    sort();
}

int main()
{
	cricket ck;
	ck.input();
	ck.display();
	return 0;
}
