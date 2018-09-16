#include <iostream>
using namespace std;

class A
{
    public : 
    void showa()
    {
        cout<<"You are in class A"<<endl;
    }
};

class B : public A
{
    public :
    void showb()
    {
        cout<<"You are in class B";
    }
};
int main() {
    
    
	A a;
	B b;
	
	b.showa();
	b.showb();
	return 0;
}