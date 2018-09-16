#include<iostream>

using namespace std;

class book
{
	int bookno;
	char booktitle[20];
	float price;
	inline float totalcost(int copy);
	public:
		void input();
		void purchase();
};

void book::input()
{
	cout<<"Enter Book Number "<<endl;
	cin>>bookno;
	cout<<"Enter Book Title "<<endl;
	cin>>booktitle;
	cout<<"Enter Price "<<endl;
	cin>>price;
}

void book::purchase()
{
	int copy;
	
	cout<<"Enter number of copy you want ";
	cin>>copy;
	cout<<"Total cost to be paid by user "<<totalcost(copy);
}

inline float book::totalcost(int copy)
{
	return price*copy;
}

int main()
{
	book b;
	
	b.input();
	b.purchase();
}
