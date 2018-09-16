#include<iostream>

using namespace std;

int a,b,c;

int &greatest(int *x,int *y)
{
	if(*x>*y) return *x;
	else return *y;
}

int main()
{
	cin>>a>>b;
	
	cout<<"Two Numbers : "<<a<<" "<<b<<endl;
	c=greatest(&a,&b);
	
	cout<<"Large "<<c<<endl;
	greatest(&a,&b)=-1;
	
	cout<<"Two numbers "<<a<<" "<<b<<endl;
		
	return 0;
}
