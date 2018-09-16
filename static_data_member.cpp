#include<iostream>

using namespace std;

class item
{
	int num;
	static int count;
	public:
		void getdata(int c)
		{
			num=c;
			count++;
		}
		void showdata()
		{
			cout<<"code: "<<num;
		}
		void dis()
		{
			cout<<endl;
			cout<<"conut"<<count;
		}
};

int item::count;

int main()
{
	item i1,i2,i3;
	i1.getdata(100);
	i1.showdata();
	i1.dis();
	i2.getdata(200);
	i2.getdata(300);
	i2.dis();
	
	return 0;
}
