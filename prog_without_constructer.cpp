#include<iostream>

using namespace std;

class test
{
	int x,y;
	public:
		void getdata();
		void showdata();
};

void test::getdata()
{
	cin>>x>>y;
}

void test::showdata()
{
	cout<<"Values of x : "<<x<<endl;
	cout<<"Values of y : "<<y<<endl;
}

int main()
{
	test t1;
	t1.getdata();
	t1.showdata();
	return 0;
}
