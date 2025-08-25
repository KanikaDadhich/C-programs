#include<iostream>
using namespace std;

int main()
{
    string a;
    int b;
    cout<<"Enter your name : ";
    cin>>a;
    b=a.length();
    if(b%2==0)
    {
        cout<<" Your are good programmer ";
    }
    else
    {
        cout<<"Sorry, you need hardwork ";
    }
    return 0;
}