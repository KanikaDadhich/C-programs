#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        {
            cout<<"  ";
            
        }
        Sleep(1000);
        cout<<"0"<<endl;

    }
    
    for(i=4;i>=1;--i)
    {
        for(j=1;j<i;j++)
        {
            cout<<"  ";
        
        }
        Sleep(1000);
        cout<<"0"<<endl;
    }
    return 0;
}