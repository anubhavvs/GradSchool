/* In a library, librarian needs to store information such as book name, book topic, price of
book, number of pages of each book. There must have operations such as :
	i. Add new book
	ii. Delete a book
	iii. Display all books
	iv. Lending books
	v. Receiving book
*/

#include<stdio.h>
#include<stdlib.h>

struct book
{
	char name[20];
	char topic[30];
	int price;
	int pages;
	int lend;
	struct book *next;
}*start=NULL;

void add()
{
	struct book *tmp, *q, *p;
	q=start;
	tmp = (struct book *)malloc(sizeof(struct book));
	tmp->lend = 0;
	printf("Enter name: ");
	scanf("%s",tmp->name);
	printf("Enter topic: ");
	scanf("%s",tmp->topic);
	printf("Enter price: ");
	scanf("%d",&tmp->price);
	printf("Enter pages: ");
	scanf("%d",&tmp->pages);
	
	if(start==NULL)
	{
		tmp->next=NULL;
		start=tmp;
	}
	else
	{
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=tmp;
		tmp->next=NULL;
	}
}

void del()
{
	struct book *p, *q, *tmp;
	int id,i;
	if(start==NULL)
	{
		printf("No books present.\n");
	}
	printf("Enter the book id you want to delete: ");
	scanf("%d",&id);
	if(id==1)
	{
		tmp=start;
		start=start->next;
		printf("%d - %s is deleted form library.\n",id,tmp->name);
		free(tmp);
	}
	else
	{
		p=start;
		for(i=1;i<id-1;i++)
		{
			p=p->next;
			if(p==NULL)
			{
				printf("Book id not present.\n");
				return ;
			}
		}
		q=p->next;
		p->next=q->next;
		printf("%d - %s is deleted form library.\n",id,q->name);
		free(q);
	}
}

void display()
{
	struct book *q;
	int id;
	if(start==NULL)
	{
		printf("No books present.\n");
		return ;
	}
	q=start;
	printf("\nThe books are:\n");
	while(q!=NULL)
	{
		id++;
		printf("Id: %d\nName: %s\nTopic: %s\nPrice: %d\nPages: %d\nStatus: ",id,q->name,q->topic,q->price,q->pages);
		q->lend ? printf("Not available") : printf("Available");
		printf("\n\n");
		q=q->next;
	}
}

void lend()
{
	struct book *p;
	int key, i;
	printf("Enter the book id to lend: ");
	scanf("%d",&key);
	p=start;
	for(i=1;i<key;i++)
	{
		p = p->next;
	}
	if(p->lend!=1)
	{
		p->lend=1;
		printf("You have taken %s.\n",p->name);
	}
	else
	{
		printf("Not available!\n");
	}
}

void recieve()
{
	struct book *p;
	int key, i;
	printf("Enter the book id to recieve: ");
	scanf("%d",&key);
	p=start;
	for(i=1;i<key;i++)
	{
		p = p->next;
	}
	if(p->lend!=0)
	{
		p->lend=0;
		printf("You have recieved %s.\n",p->name);
	}
	else
	{
		printf("Already available!\n");
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("1. Add book\n2. Delete book\n3. Display\n4. Lend Book\n5. Recieve Book\n6. Exit\nYour Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				lend();
				break;
			case 5:
				recieve();
				break;
			case 6:
				exit(0);
			default:
				printf("Invalid choice!\n");
		}
	}
	return 0;
}
