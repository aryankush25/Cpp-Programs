#include <iostream> 
using namespace std; 
//stub
class Number
{
	public:
		int getNumber()
		{
			int n;
			cin>>n;
			return n;
		}
};
class Square
{
	public:
		void cal(int n)
		{
			cout<<n*n<<endl;
		}
};
class Cube
{
	public:
		void cal(int n)
		{
			cout<<n*n*n<<endl;
		}
};
//stub
int main() 
{ 
    int num; 
    Number n; 
    Square s; 
    Cube c; 
    num=n.getNumber(); 
    s.cal(num); 
    c.cal(num); 
    return 0; 
} 
