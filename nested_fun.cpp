#include<iostream>
using namespace std;

class calculator{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    void showAddition(int x,int y)
    {
        cout<<"Sum of  "<< x <<" and "<< y <<" is : "<<add(x,y)<<endl;
    }
};
int main()
{

    calculator calc;
    calc.showAddition(10,20);
    return 0;
}