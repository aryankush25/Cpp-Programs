#include<iostream>
using namespace std;

int prime(int x)
{
	int i,flag=0;
	
	for(i=2;i<=(x/2);i++)
	{
		if(x%i==0)
		{
			flag=1;
			break;
		}
	}
	if(x==0 || x==1)
	{
		flag=1;
	}
	return flag;
}

int main()
{
	int a,b;
	
	cout<<"Enter the numbers b/w you want to find prime numbers"<<endl;
	cin>>a>>b;
	
	for(int i=a;i<=b;i++)
	{
		if(prime(i)==0)
		{
			cout<<i<<" is a prime number"<<endl;
		}
	}
	return 0;
}
