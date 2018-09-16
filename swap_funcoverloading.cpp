#include<iostream>
using namespace std;

int swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	return 0;
}

float swap(float &x,float &y)
{
	float temp;
	temp=x;
	x=y;
	y=temp;
	return 0;
}

int main()
{
	int x,y;
	float a,b;
	
	cout<<"Enter First Number ";
	cin>>x;
	cout<<"Enter Second Number ";
	cin>>y;
	swap(x,y);
	
	cout<<x<<" "<<y<<endl;
	
	cout<<"Enter First Number ";
	cin>>a;
	cout<<"Enter Second Number ";
	cin>>b;
	swap(a,b);
	
	cout<<a<<" "<<b<<endl;
	
	return 0;
} 
