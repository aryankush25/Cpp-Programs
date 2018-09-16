#include<iostream>
using namespace std;

class complex
{	
	int real;
	float img;
	public:
		void store(int a, float b);
		void print();
		complex add(complex c);
		complex sub(complex c);
};

void complex:: store(int a, float b)
{
	real=a;
	img=b;
}
		
void complex:: print()
{
	cout<<"The value is "<<real<<" + "<<img<<"i"<<endl;
}

complex complex::add(complex c)
{
	complex temp;
	temp.real = real+c.real;
	temp.img = img+c.img;
	return temp;
}

complex complex::sub(complex c)
{
	complex temp;
	if(real>c.real)
	{
		temp.real = real-c.real;
		temp.img = img-c.img;
	}
	else
	{
		temp.real = c.real-real;
		temp.img = c.img-img;
	}
	return temp;
}


int main()
{
	complex c1,c2,c3;
	int x,y,k;
	float z,w;
	
	cout<<"Enter first number "<<endl;
	cin>>x>>z;
	c1.store(x,z);
	
	cout<<"Enter second number "<<endl;
	cin>>y>>w;
	c2.store(y,w);
	
	cout<<"Enter operation 1 for + , 2 for -"<<endl;
	cin>>k;
	
	if(k==1)
	c3=c1.add(c2);
	
	else
	c3=c1.sub(c2);
	
	c3.print();
	
	return 0;
}
