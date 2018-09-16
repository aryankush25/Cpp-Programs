#include <iostream>
using namespace std;

class A
{
    int i;
    public:
    A(int a)
    {
        i=a;
        cout<<"Class A"<<endl;
    }
};

class B : public A
{
    int j;
    public:
    B(int b) : A(b)
    {
        j=b;
        cout<<"Class B"<<endl;
    }
};

/*class C : public A,public B
{
    public:
    C()
    {
        cout<<"Class C"<<endl;
    }
};
*/
int main() {
    B b(10);
	// your code goes here
	return 0;
}
