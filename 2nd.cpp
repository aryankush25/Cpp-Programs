#include<iostream>
using namespace std;
int count=0;

void func()
{
	count++;
	cout<<"The function is called "<<count<<" time"<<endl;
}

int main()
{
	for(int i=0;i<6;i++)
	func();

	cout<<"The Function is called total "<<count<<" time";

	return 0;
}
