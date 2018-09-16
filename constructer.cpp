#include<iostream>
using namespace std;

class complex
{
	int real,imag;
	public:
		complex()
		{
			real=55;
			imag=69;
		}
		complex(int x,int y)
		{
			real=x;
			imag=y;
			cout<<"I am a constructer"<<endl;
		}
		complex(int x,double y=10)
		{
			real=x;
			imag=y;
			cout<<"I am a constructer"<<endl;
		}
		void display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};

int main()
{
	complex a,c(5,6),d(2);
	c.display();
	a.display();
	d.display();
	return 0;
}
