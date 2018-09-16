#include<iostream>

using namespace std;

inline int print(int i)
{
	return i*i*i;
}
int main()
{
	int a;
	cin>>a;
	cout<<print(a);
	return 0;
}
