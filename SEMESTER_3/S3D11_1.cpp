#include<iostream>
#include<stdlib.h>

using namespace std;

class node {
	private:
		int data;
		node *next;
	public:
		void addbeg();
		void addafter();
		void del();
		void display();
};

node *start = NULL;

void node :: addbeg()
{
	node *tmp;
	tmp = new node;
	cout<<"Enter data: ";
	cin>>tmp->data;
	if(start==NULL)
		tmp->next = NULL;
	else
		tmp->next = start;
	start=tmp;
}

void node :: addafter()
{
	node *tmp, *q;
	int pos;
	if(start==NULL)
	{
		cout<<"No node is present.\n";
		return ;
	}
	cout<<"Enter the node number after which you want to insert data: ";
	cin>>pos;
	q=start;
	for(int i=1;i<pos;i++)
	{
		q=q->next;
		if(q==NULL)
		{
			cout<<"Less number of nodes present.\n";
			return ;
		}
	}
	tmp = new node;
	cout<<"Enter data: ";
	cin>>tmp->data;
	tmp->next = q->next;
	q->next = tmp;
}

void node :: del()
{
	node *tmp, *p, *q;
	int pos;
	if(start==NULL)
	{
		cout<<"No node present.\n";
	}
	cout<<"Enter the node number you want to delete: ";
	cin>>pos;
	if(pos<=0)
	{
		cout<<"Position should be more than 1.\n";
		return ;
	}
	if(pos==1)
	{
		tmp=start;
		start=start->next;
		cout<<tmp->data<<" is deleted form the node with position "<<pos<<endl;
		delete tmp;
	}
	else
	{
		p=start;
		for(int i=1;i<pos-1;i++)
		{
			p=p->next;
			if(p==NULL)
			{
				cout<<"Less number of nodes present.\n";
				return ;
			}
		}
		q=p->next;
		p->next=q->next;
		cout<<q->data<<" is deleted form the node with position "<<pos<<endl;
		delete q;
	}
}

void node :: display()
{
	node *q;
	if(start==NULL)
	{
		cout<<"No node present.\n";
		return ;
	}
	q=start;
	cout<<"The nodes are:\n";
	while(q!=NULL)
	{
		cout<<q->data<<endl;
		q=q->next;
	}
}

int main()
{
	node p;
	int ch;
	
	while(1)
	{
		cout << "1. Add at begining\n2. Add at position\n3. Delete at position\n4. Display\n5. Exit\nYour choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				p.addbeg();
				break;
			case 2:
				p.addafter();
				break;
			case 3:
				p.del();
				break;
			case 4:
				p.display();
				break;
			case 5:
				exit(0);
		}
	}
}
