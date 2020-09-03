// Frequency using Class in C++//

#include<iostream>
#include<string.h>

using namespace std;

class A {
	private:
        char a;
		char x[15];
    public:
		void input();
        void search();
        
};

void A :: input()
{
	cout<<"Enter the string: ";
    gets(x);
}

void A :: search()
{
	{
            int c=0;  
            cout<<"Enter the character you want want to search: ";
            cin>>a;
            for(int i=0;i<strlen(x);i++)
            {
            	if(x[i]==a)
                c++;
            }
            if(c!=0)
            	cout<<"\nThe frequency of the character is: "<<c;
			else
				cout<<"\nItem not found.\n";  
        }
}

int main()
{
  A op;
  op.input();
  op.search();
  return 0;
}
