//Queue uisng Class in C++//

#include<iostream>
#define N 5

using namespace std;

class queue {
	private:
		int arr[N];
		int front, rear;
	public:
		void init(){
			front=0;
			rear=0;
		}
		void insert();
		void del();
		void display();
};

void queue :: insert()
{
	int x;
	if(rear==N)
	{
		cout << "Not enough memory. Delete some items to insert more.\n";
	}
	else
	{
		cout<<"Enter the data: ";
		cin>>x;
		arr[rear]=x;
		rear++;
	}
}

void queue :: del()
{
	if(front==rear)
	{
		cout << "Queue is empty. Nothing to delete.\n";
	}
	else
	{
		cout <<arr[front]<<" is deleted from the queue.\n";
		front++;
	}
}

void queue :: display()
{
	if(front==rear)
	{
		cout<<"Queue is empty. Nothing to display.\n";
		
	}
	else
	{
		cout << "Queue:\n";
		for(int i=front;i<rear;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
}

int main()
{
	queue q;
	int ch;
	q.init();
	while(1)
	{
		cout << "1. Insert\n2. Delete\n3. Display\n4. Exit\nYour choice: ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				q.insert();
				break;
			case 2:
				q.del();
				break;
			case 3:
				q.display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Invalid Option\n";
				break;
		}
	}
	return 0;
}
