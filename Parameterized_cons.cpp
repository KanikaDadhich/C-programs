#include<iostream>
using namespace std;
class A
{
    public:
    int ID;
    string n;
    A(int rollNo,string Name)
    {
        ID=rollNo;
        n=Name;
        cout<<"Roll NO : "<<ID<<endl;
        cout<<"Name is : "<<n<<endl;
    }
};
int main()
{
    A ob(21,"John");
    return 0;
}