#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
    int i;
    system("Pause");
    for(i=5;i>=1;i--)
    {
        
        cout<<i<<endl;
        Sleep(1000);
    }
    
    cout<<"Rocket Launch";
    return 0;
}