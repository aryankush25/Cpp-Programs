#include<iostream>
using namespace std;

int palindrome(int x)
{
	int y=0,rem=0,z=x;
	
	while(z!=0)
	{
		rem=z%10;
		y=(y*10)+rem;
		z=z/10;
	}
	if(y==x)
	return 0;
	else
	return 1;
}

int main()
{
	int x;
	
	cout<<"Enter number ";
	cin>>x;
	
	if(palindrome(x)==0)
	{
		cout<<"The Number is a palindrome ";
	}
	else
	{
		cout<<"The Number is not a palindrome ";
	}
	
}
