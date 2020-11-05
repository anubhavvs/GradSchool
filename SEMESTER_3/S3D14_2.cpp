#include<iostream>

using namespace std;

void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void swap(float &a, float &b)
{
	float temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int ix, iy;
	float fx, fy;
	
	cout<<"Enter integer ix and iy:"<<endl;
	cin>>ix>>iy;
	cout<<"Before Swapping:"<<endl;
	cout<<"ix: "<<ix<<"\niy: "<<iy<<endl;
	swap(ix, iy);
	cout<<"After Swapping:"<<endl;
	cout<<"ix: "<<ix<<"\niy: "<<iy<<endl;
	
	cout<<"Enter float fx and fy:"<<endl;
	cin>>fx>>fy;
	cout<<"Before Swapping:"<<endl;
	cout<<"fx: "<<fx<<"\nfy: "<<fy<<endl;
	swap(fx, fy);
	cout<<"After Swapping:"<<endl;
	cout<<"fx: "<<fx<<"\nfy: "<<fy<<endl;
	
	return 0;
}
