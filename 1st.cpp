#include<iostream>
using namespace std;

inline int sum(int a,int b,int c,int d,int e)
{
	return a+b+c+d+e;
}

inline int product(int a,int b,int c,int d,int e)
{
	return a*b*c*d*e;
}


int main()
{
	int a,b,c,d,e;
	
	cout<<"Enter 5 Numbers"<<endl;
	cin>>a>>b>>c>>d>>e;
	
	cout<<"The sum is "<<sum(a,b,c,d,e)<<endl;
	cout<<"The product is "<<product(a,b,c,d,e)<<endl;
	
}
