#include<iostream>
using namespace std;

class A;
class B
{
	int r,m;
	public:
		B(int x,int y)
		{
			r=x;
			m=y;
		}
		friend void operator+(A t1,B t);
};
class A
{
	int real,imag;
	public:
		A(int x,int y)
		{
			real=x;
			imag=y;
		}
		friend void operator+(A t1,B t);
};

void operator+(A t1,B t)
{
	cout<<t1.real+t.r<<"+i";
	cout<<t1.imag+t.m;
}

int main()
{
	A a(5,6);
	B b(4,4);
	a+b;
	return 0;
}
