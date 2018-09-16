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
		void operator==(comp c)
		{
			if(a==c.a)
			cout<<"Both Are Equal";
			else
			cout<<"Not Equal";
		}
};

int main()
{
	comp t,t1;
	t.getdata();
	t1.getdata();
	t==t1;
	return 0;
}

