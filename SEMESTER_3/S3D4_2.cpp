// Binary Search using Class in C++//

#include<iostream>
#define N 5

using namespace std;

class Bsearch {
	private:
		int x[N];
		int key;
	public:
		void input();
		void search();
};

void Bsearch :: input()
{
	cout<< "Enter the array data:\n";
	for(int i=0; i<N; i++)
	{
		cin>>x[i];
	}
}

void Bsearch :: search()
{
	int first=0, last=N-1, middle, i;
	cout<<"Enter the key to search: ";
	cin>>key;
	middle=(first+last)/2;
	while (first <= last)
  	{
	  if (x[middle] < key)
      {
        first = middle + 1;
      }
      else if (x[middle] == key)
      {
        cout <<key<<" is present at position: "<<middle+1<<endl;
        break;
      }
      else
      {
        last = middle - 1;
      }
      middle = (first + last)/2;
  	}
    if(first > last)
    {
        cout <<key<<" is not present.\n";
    }
}

int main()
{
	Bsearch obj;
	obj.input();
	obj.search();
	return 0;
}
