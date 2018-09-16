#include<iostream>
#include<string.h>
using namespace std;

class str
{
	char st[100];
	public:
		void read();
		void show();
		void operator+(str s);
};

void str::read()
{
	cin>>st;
}

void str::operator+(str s)
{
	strcat(st,s.st);
	cout<<"String :"<<st;
}

int main()
{
	str a,b,c;
	a.read();
	b.read();
	a+b;
,
