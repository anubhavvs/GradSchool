//Stack using Class in C++//

#include <iostream>
#define N 5

using namespace std;

class stack
{
	private:
		int arr[N];
		int top;
	public:
		void init(){
			top=-1;
		}
		void push();
		void pop();
		void display();
};

void stack :: push()
{
	int x;
	if(top==N-1)
	{
		cout << "Stack Overflow.Delete some item to push a value.\n";
	}
	else
	{	
		cout <<"Enter the value:\n";
		cin >> x;
		top++;
		arr[top]=x;
	}
}

void stack :: pop()
{
	if(top==-1)
	{
		cout << "Stack is empty.Nothing to pop.\n";
	}
	else
	{
		cout << arr[top]<<" is deleted from the stack.\n";
		top--;
	}
}

void stack :: display()
{
	if(top==-1)
	{
		cout << "Stack is empty. Nothing to display.\n";
	}
	else
	{	
		cout << "Stack elements are:\n";
		for(int i=0;i<=top;i++)
		{
			cout << arr[i] << "\n";
		}
	}
}

int main()
{
	stack stk;
	int ch;
	stk.init();
	while(1)
	{
		cout << "1. Push\n2. Pop\n3. Display\n4. Exit\nYour choice: ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				stk.push();
				break;
			case 2:
				stk.pop();
				break;
			case 3:
				stk.display();
				break;
			case 4:
				exit(0);
			default:
				cout << "Invalid Option\n";
		}
	}
	return 0;
}
