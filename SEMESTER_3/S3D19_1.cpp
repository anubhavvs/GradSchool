#include<iostream>

using namespace std;

class BCA {
	protected:
		int roll, age;
		char name[20];
	public:
		void input();
		void display();
};

void BCA :: input()
{
	cout<<"Enter Roll: ";
	cin>>roll;
	cout<<"Enter Age: ";
	cin>>age;
	cout<<"Enter Name: ";
	cin>>name;
}
 void BCA :: display()
 {
 	cout<<"\nRoll: "<<roll<<"\nAge: "<<age<<"\nName: "<<name;
 }
 
 class result : public BCA {
 	protected:
 		int marks[5];
 		int total;
 	public:
 		void marks_input();
 		void result_show();
 };
 
 void result :: marks_input()
 {
 	cout<<"Enter marks of 5 subjects:\n";
 	total=0;
 	for(int i=0;i<5;i++)
 	{
 		cin>>marks[i];
 		total += marks[i];
	}
 }
 
 void result :: result_show()
 {
 	display();
 	cout<<"\nMarks of 5 subjects:\n";
 	for(int i=0;i<5;i++)
 	{
 		cout<<marks[i]<<endl;	
	}
	cout<<"Total: "<<total<<endl;
 }
 
 int main()
 {
 	result r;
 	r.input();
 	r.marks_input();
 	r.result_show();
 	
 	return 0;
 }
