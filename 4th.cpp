#include<iostream>

using namespace std;

void swap(int &a, int &b)
{
	int c;
	
	c=a;
	a=b;
	b=c;
	
}

int main()
{
	int x,y;
	
	cout<<"Enter Values ";
	
	cin>>x>>y;
	
	cout<<endl<<"The values before swap "<<x<<" "<<y<<endl;
	
	swap(x,y);
	
	cout<<"The values after swap "<<x<<" "<<y<<endl;
	
}
