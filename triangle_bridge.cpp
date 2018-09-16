#include<iostream>

using namespace std;

int main()
{
	int i=0,j=0;
	
	for(i=0;i<5;i++)
	{
		for(j=1;j<10;j++)
		{
			if(j<=5-i)
			{
				cout<<j;
			}
			else if(j>=5+i)
			{
				cout<<5-(j%5);
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
