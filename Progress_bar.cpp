#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    int i,j;
    cout<<"software installing .."<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"██";
        }
        
        cout<< i * 20<<"%"<<endl;
        Sleep(1000);
        cout<<endl;
    }
    
    cout<<"Software successfully install";

    return 0;
}