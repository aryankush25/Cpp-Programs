#include<iostream>

using namespace std;

class report
{
	int admno;
	char name[20];
	float marks[5];
	float average;
	float getavg();
	
	public:
	 void readinfo();
	 void displayinfo();
};

void report::readinfo()
{
	int i;
	cout<<"Enter Admission No."<<endl;
	cin>>admno;
	cout<<"Enter Name"<<endl;
	cin>>name;
	cout<<"Enter Marks in five subjects"<<endl;
	for(i=0;i<5;i++)
	cin>>marks[i];
	average=getavg();
}

float report::getavg()
{
	float avg=0;
	for(int i=0;i<5;i++)
	{
		avg=avg+marks[i];
	}
	return avg/5;
}

void report::displayinfo()
{
	cout<<"Admission No. "<<admno<<endl;
	cout<<"Name "<<name<<endl;
	cout<<"Marks in five subjects ";
	for(int i=0;i<5;i++)
	cout<<marks[i]<<" ";
	cout<<endl<<"The Average is "<<average;
}
int main()
{
	report r;
	r.readinfo();
	r.displayinfo();
	return 0;
}
