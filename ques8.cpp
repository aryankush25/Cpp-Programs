#include<iostream>
#include<string.h>
using namespace std;
class internal
{
    public:
        int im[4];
};
//Stub

class external
{
    public:
        int em[4];
};

class Result : public internal , public external
{
    public:
        Result(int imarks[],int emarks[])
        {
            int isum=0,esum=0;
            for(int i=0;i<3;i++)
            {
                isum=isum+imarks[i];
                esum=esum+emarks[i];
            }
            cout<<isum<<endl<<esum<<endl<<isum+esum<<endl;
        }
};

//Stub
int main() {
    int i;
    int imarks[3],emarks[3];
    for(i=0;i<3;i++)
        {
            cin>>imarks[i];
        }
        for(i=0;i<3;i++)
        {
            cin>>emarks[i];
        }
    Result r(imarks,emarks);
    return 0;
}
