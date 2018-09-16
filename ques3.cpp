#include<iostream>
using namespace std;

class bill
{
//Stub

protected:
	int total,item_price,qty;
public:
	void calc()
	{
		cin>>item_price>>qty;
		total=item_price*qty;
	}
};

class cash : public bill
{
	int pay,n2000,n100,n50,n10;
	public:
		void get_cash()
		{
			calc();
			cin>>n2000>>n100>>n50>>n10;
			pay=total-((n2000*2000)+(n100*100)+(n50*50)+(n10*10));
		}
		void display()
		{
			if(pay>0)
			cout<<"Need to pay: "<<pay;
			else
			cout<<"Clear";
		}
};

//Stub
int main()
{
	cash d;
    d.get_cash();
	d.display();
    return 0;
}
