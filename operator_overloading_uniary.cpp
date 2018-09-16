#include<iostream>
using namespace std;
class sub
{
	int a,b,c;
	public:
		void getdata();
		void operator-();
};

void sub::getdata()
{
	cin>>a>>b>>c;
}

void sub::operator-()
{
	a=a+1;
	b=b+2;
	c=c+3;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	cout<<"c= "<<c<<endl;
}

int main()
{
	sub s;
	s.getdata();
	-s;
	return 0;
}

