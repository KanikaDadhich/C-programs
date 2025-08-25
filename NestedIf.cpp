#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    // a=24;
    // b=35;
    // c=23;
    cout<<"Enter first value  : ";
    cin>>a;
    cout<<"Enter second value : ";
    cin>>b;
    cout<<"Enter third value : ";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
        cout<<"A is greatest";
        }
        else
        {
            cout<<"C is greatest";
        }
    }
    else{
        if(b>c)
        {
            cout<<"B is greatest";
        }
        else
        {
            cout<<"C is greatest";
        }
    }
    return 0;
}