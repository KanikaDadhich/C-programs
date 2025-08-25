#include<iostream>
using namespace std;

int main()
{
    int  num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num>40)
    {
        if(num>75)
        {
            cout<<num<<" Distinction "<<endl;
        }
        else
        {
            cout<<num<<" Pass "<<endl;
        }
    }
    else
    {
        cout<<"Fail";
    }
    return 0;
}