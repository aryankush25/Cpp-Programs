#include<iostream>

using namespace std;

class item
{
	int number;
	float cost;
	public:
	void getdata(int a, float b);
	void printdata()
	{
		cout<<"The Total Cost is "<<number*cost<<endl;
	}	
};

void item :: getdata(int a, float b)
{
	number=a;
	cost=b;
}

int main()
{
	item x,y;
	int a,b;
	
	cout<<"Enter a"<<endl;
	cin>>a;
	
	x.getdata(a,2.5);
	x.printdata();
	
	cout<<"Enter b"<<endl;
	cin>>b;
	
	y.getdata(b,2.5);
	y.printdata();
}
