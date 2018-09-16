#include<iostream>
#include<string.h>
using namespace std;
int size;
class bill
{
    protected:
        int items[10];
        float price[10];
    public:
        bill(int items[],float price[],int size);
        virtual void total()=0;
        virtual void display()=0;
};
//Stub

bill::bill(int items[],float price[],int si)
{
    for(int i=0;i<si;i++)
    {
        this->items[i]=items[i];
        this->price[i]=price[i];
    }
}

class Cheque : public bill
{
    int ch_no;
    char na[30];
    float t;
    public:
    Cheque(int item[], float price[], int c_no, char n[], int s) : bill(item, price, s)
    {
        ch_no=c_no;
        strcpy(na,n);
        t=0;
        size=s;
    }
    void total()
    {
        for(int i=0;i<size;i++)
        {
            t=t+price[i];
        }
    }
    void display()
    {
        cout<<"payed by cheque"<<endl;
        cout<<"Cheque No. "<<ch_no<<endl;
        cout<<"Name of Bank "<<na<<endl;
        cout<<"Total = "<<t<<endl;
    }
};

class Cash : public bill
{
    float t;
    public:
    Cash (int item[], float price[], int s) : bill(item, price, s)
    {
        t=0;
        size=s;
    }
    void total()
    {
        for(int i=0;i<size;i++)
        {
            t=t+price[i];
        }
    }
    void display()
    {
        cout<<"payed by cash"<<endl;
        cout<<"Total = "<<t<<endl;
    }
};

//Stub
int main()
{
    int s;
    cin>>s;
    int item[s];
    for (int i=0;i<s;i++)
        cin>>item[i];
    float price[s];
    for(int i=0;i<s;i++)
        cin>>price[i];
    int option;
    cin>>option;
    if(option==1)
    {
        int c_no;
        char n[30];
        cin>>c_no;
        cin.ignore();
        cin.getline(n,30);
        Cheque Ch(item,price,c_no,n,s);
        Ch.total();
        Ch.display();
    }
    else if(option==2)
    {
        Cash C(item,price,s);
        C.total();
        C.display();
    }
    return 0;
}
