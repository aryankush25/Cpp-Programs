#include<iostream>
using namespace std;

class test
{
	static int count;
	public:
		test()
		{
			count++;
			cout<<count<<" Object Created"<<endl;
		}
		~ test()
		{			
			cout<<count<<" Object Destroyed"<<endl;
			count--;
		} 
};
int test::count;

int main()
{
	cout<<"MAIN BLOCK"<<endl;
	test t1;
	{
		cout<<"INNER BLOCK"<<endl;
		test t2,t3l;
		cout<<"EXIT INNER BLOCK"<<endl;
	}
	cout<<"EXIT MAIN BLOCK"<<endl;
	return 0;
}
