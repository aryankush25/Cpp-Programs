#include<iostream>
using namespace std;

int main()
{
	int n,sum=0,rem=0,flag=1;
	
	cout<<"Enter Number ";
	cin>>n;
	
	while(flag!=0)
	{
		while(n!=0)
		{
			rem=n%10;
			sum=sum+rem;
			n=n/10;
		}
		
		if(sum>0 && sum<10)
		{
			flag=0;
			break;
		}
		n=sum;
		sum=0;
	}
	
	cout<<sum;
	
}
