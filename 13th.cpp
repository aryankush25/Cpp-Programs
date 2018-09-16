#include<iostream>
using namespace std;

int main()
{
	int k=1,j,l;
	for(int i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		cout<<"  ";
		for(l=1;l<=i;l++)
		{
			cout<<" "<<k;
			k++;
		}
		cout<<endl;
	}
	return 0;
} 
