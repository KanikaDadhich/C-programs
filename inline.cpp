#include<iostream>
using namespace std;
class A
{
    public:
    inline void square(int s);
};
void A::square(int s){
    cout<<"Square is : "<<s*s<<endl;
}
int main()
{
    A ob;
    ob.square(3);
    return 0;
}