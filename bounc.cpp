#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int p,w,d,i;
    p=0;
    w=5;
    d=1;
    while(true)     //Infinite loop
    {

        for(i=0;i<p;i++)
        {
            cout<<" ";
            cout<<" 0 "<<endl;
        }
        Sleep(100);
        system("CLS");
        
        p=p+d;
        if(p>=w)  d=-1;
        if(p<=0)  d=1;
    }
    return 0;
}