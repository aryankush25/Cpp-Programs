#include<iostream>

using namespace std;

class test
{
	int x;
	float y;
	public:
	    test(){};
		test(int a,float b)
		{
			x=a;
			y=b;
		}
		test( test &t);
		void print()
		{
		    cout<<x<<" "<<y<<endl;
		}
};

test::test( test &t)
{
	x=t.x;
	y=t.y;
}

int main()
{
	int a;
	float b;
	cin>>a>>b;
	test t1(a,b),t2(t1);
	test t3 = t1;
	test t4;
	t4=t1;
	t1.print();
	t2.print();
	t3.print();
	t4.print();
	return 0;
}
