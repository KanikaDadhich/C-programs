#include<iostream>
using namespace std;
class A
{
    public:
    inline void show(int c)
    {
        cout<<"Cube is : "<<c*c*c<<endl;
    }
};
int main()
{
    A ob;
    ob.show(3);
    return 0;
}
