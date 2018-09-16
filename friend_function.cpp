#include<iostream>
using namespace std;

class A;
class B
{
	int a;
	public:
		void getdata(int y)
		{
			a=y;
		}
		void display()
		{
			cout<<"Class B "<<a<<endl;
		}
		friend void sum(A,B);
};

class A
{
	int a;
	public:
		void getdata(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<"Class A "<<a<<endl;
		}
		friend void sum(A,B);//it can access private data of both class because it is a friend and it is used under call by reference.
};


void sum(A o1,B o2)
{
	cout<<o1.a+o2.a<<endl;
}

int main()
{
	A c;
	B d;
	
	c.getdata(100);
	d.getdata(200);
	c.display();
	d.display();
	sum(c,d);
	return 0;
	
}
