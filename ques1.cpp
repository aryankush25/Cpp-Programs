#include<iostream>
using namespace std;
class person
{
protected:
    char name[20]; int age;
public:
    void get_person()
    {
// This This Stub
        
        cin.get(name,20);
        cin>>age;
    }
    void show_person()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Batsman : public person
{
    int odi,hc,runs;
    float avg,sr;
public:
    void get()
    {
        cout<<"Enter Information\n";
        get_person();
        cin>>odi>>hc>>runs>>avg>>sr;
    }
    void show()
    {
        show_person();
        cout<<"ODI Played: "<<odi<<endl;
        cout<<"Half centuries made: "<<hc<<endl;
        cout<<"Run made: "<<runs<<endl;
        cout<<"Batting Average: "<<avg<<endl;
        cout<<"Strike Rate: "<<sr<<endl;
    }
};



//This Is Stub
int main()
{
    Batsman b;
    b.get();
    b.show();
    return 0;
}

