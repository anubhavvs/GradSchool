//Circular Queue uisng Class in C++//

#include<iostream>
#define N 5

using namespace std;

class queue {
	private:
		int arr[N];
		int front, rear;
	public:
		void init(){
			front=-1;
			rear=-1;
		}
		void insert();
		void del();
		void display();
};

void queue :: insert()
{
	int x;
	if((front==0 && rear==N-1)||(rear==(front-1)%(N-1)))
	{
		cout << "Queue is full. Delete some items to insert data.\n";
		return ;
	}
	else if(front==-1)
	{
		front=0;
		rear=0;
		cout<<"Enter the data: ";
		cin>>x;
		arr[rear]=x;
	}
	else if(rear==N-1 && front!=0)
	{
		rear=0;
		cout << "Enter the data: ";
		cin>>x;
		arr[rear]=x;
	}
	else
	{
		rear++;
		cout << "Enter the data: ";
		cin>>x;
		arr[rear]=x;
	}
}

void queue :: del()
{
	if(front==-1)
	{
		cout<<"Queue is empty. Nothing to delete.\n";
		return ;
	}
	int x = arr[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
		cout<<x<<" is deleted from the queue.\n";
	}
	else if(front==N-1)
	{
		front=0;
		cout<<x<<" is deleted from the queue.\n";
	}
	else
	{
		cout<<x<<" is deleted from the queue.\n";
		front++;
	}
}

void queue :: display()
{
	int i;
	if(front==-1)
	{
		cout<<"Queue is empty. Nothing to display.\n";
		return ;
	}
	if(rear>=front)
	{
		cout << "The queue is:\n";
		for(i=front;i<=rear;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	else
	{
		cout << "The queue is:\n";
		for(i=front;i<N;i++)
		{
			cout<<arr[i]<<endl;
		}
		for(i=0;i<=rear;i++)
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
