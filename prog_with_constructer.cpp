#include<iostream>

using namespace std;

class test
{
	int x,y;
	public:
		test()
	{
		cin>>x>>y;
		cout<<"Values of x : "<<x<<endl;
		cout<<"Values of y : "<<y<<endl;
	}
	void cup()
	{
		cout<<x<<y;
	}
};



int main()
{
	test t1;
	t1.cup();
	return 0;
}
