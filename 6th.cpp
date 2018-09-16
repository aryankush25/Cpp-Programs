#include<iostream>

using namespace std;

int main()
{
	int i,j;
	
	for(i=0;i<5;i++)
	{
		for(j=65;j<74;j++)
		{
			if(j<=69-i)
			{
				cout<<(char)j;
			}
			else if(j>=69+i)
			{
				cout<<(char)(69-(j%69));
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
