#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
int main()
{
    SetConsoleCP(65001);
    srand(time(0));
    int rain=rand()%101;
    if(rain>=70)
    {
        cout<<"Heavy Rain today,stay at home"<<endl;
        for(int i=0;i<10;i++)
        {
            cout<<"////"<<endl;
            Sleep(1000);
        }
    }
    else if(rain >=69 && rain<=20)
    {
        cout<<"Moderate Rain,Go Outside with precaution "<<endl;
        for(int i=0;i<10;i++)
        {
            cout<<"// "<<endl;
            Sleep(1000);
        }
    }
    else{
        cout<<"Sunny day ";
    }
    return 0;
}