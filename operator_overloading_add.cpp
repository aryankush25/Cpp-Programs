#include<iostream>
using namespace std;
class comp
{
	int a;
	public:
		void getdata()
		{
			cin>>a;
		}
		void operator+(comp c)
		{
			cout<<a+c.a;
		}
};

int main()
{
	comp t,t1;
	t.getdata();
	t1.getdata();
	t+t1;
	return 0;
}

