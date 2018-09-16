#include<iostream>
using namespace std;
class shape
{
    protected:
        double x, y;
    public:
        void getdata()
        {
            double a,b;
            cin>>a>>b;
            x=a;
            y=b;
        }
        virtual void display_area()=0;
};
// Stub

class triangle : public shape
{
    public:
        void display_area()
        {
            cout<<(x*y)/2<<endl;
        }
    
};

class rectangle : public shape
{
    void display_area()
    {
        cout<<x*y<<endl;
    }
};

// Stub
int main()
{
    shape *p;
    triangle t;
    rectangle r;
    p=&t;
    p->getdata();
    p->display_area();
    p=&r;
    p->getdata();
    p->display_area();
}
