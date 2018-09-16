#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
        int rollno;
        char name[20];
        student(char name1[20],int x)
        {
// STUB
            cout<<x<<endl;
            cout<<name1<<endl;
        }
};

class Result : public student
{
    public:
        Result(int rno,char name[], int marks[]) : student(name,rno)
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum=sum+marks[i];
        }
        cout<<sum<<endl;
    }
};
// STUB
int main() {
    int rno,i;
    char name[20];
    int marks[3];
    cin>>rno;
    cin>>name;
    for(i=0;i<3;i++)
    {
        cin>>marks[i];
    }
    Result r(rno,name,marks);
    return 0;
}
