#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    string a;
    a="Welcome in JECRC ";
    for(int i =0;i<a.length();i++)
    {
        cout<<a[i]<<flush;
        Sleep(100);
    }
    return 0;
}