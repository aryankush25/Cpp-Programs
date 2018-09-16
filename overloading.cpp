#include<iostream>
#include<stdlib.h>

using namespace std;

void print(int c)
{
	cout<<c<<endl;
}
void print(float c)
{
	cout<<c<<endl;
}
void print(char c)
{
	cout<<c<<endl;
}

int main()
{
	int a;
	float b;
	char c;
	cout<<"Enter int"<<endl;
	cin>>a;
	fflush(stdin);
	cout<<"Enter float"<<endl;
	fflush(stdin);
	cin>>b;
	cout<<"Enter char"<<endl;
	fflush(stdin);
	cin>>c;
	print(a);
	print(b);
	print(c);
	return 0;
}
