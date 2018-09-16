#include<iostream>
using namespace std;

class find_
{
    protected:
        int lb,ub;
//STUB
    public:
    void get()
    {
        cin>>lb>>ub;
    }
};

class der_prime : public find_
{
    int count=0,greatest,arr[10]={0};
    public:
        void detect_prime()
        {
            int rem,num,i;
            for(i=lb;i<=ub;i++)
            {
                if(prime(i)==1)
                {
                    num=i;
                    while(num!=0)
                    {
                        rem=num%10;
                        num=num/10;
                        arr[rem]++;
                    }
                }
            }
        }
        int prime(int n)
        {
            int i,flag=1;
            
            for(i=2;i<n/2;i++)
            {
                if(n%i==0)
                {
                    flag=0;
                }
            }
            return flag;
        }
        void print_()
        {
            int i;
            for(i=1;i<10;i++)
            {
                if(arr[i]>=count)
                {
                    count=arr[i];
                    greatest=i;
                }
            }
            cout<<greatest<<endl<<count;
        }
};

//STUB
    
int main()
{
    static der_prime d1;
    d1.get(); //function in base class to enter lower bound(lb) and upper bound values(ub)
    d1.detect_prime(); // this function is responible for logic building in derived class(der_prime)
    d1.print_();//print the desired output in derived class
    return 0;
}
