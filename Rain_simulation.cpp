#include<iostream>
#include<windows.h>
#include<ctime>
#include<cstdlib>
using namespace std;
class A
{
    public:
    void show()
    {
    SetConsoleOutputCP(65001);
    srand(time(0));
    int rain=rand()%100+1;
    if(rain>=70){
        cout<<"Heavy Rain Today,Stay at home"<<endl;
        cout<<"🌧️ 🌧️ 🌧️ 🌧️"<<endl;
        fall(10);
    }

    else if(rain<69 && rain>=20)
    {
        cout<<"Moderate Rain ,Go outside with Precaution "<<endl;
        cout<<"🌧️ 🌧️ 🌧️ 🌧️"<<endl;
        fall(3);
        
    }

    else
    {
        cout<<"Sunny ☀️"<<endl;
        
    }
}
void fall(int a)
{
    for(int i=0;i<=a;i++)
    {
        cout<<"💧💧💧💧  \n";
        Sleep(1000);
    }
}
};
int main()
{
    A ob;
    srand(time(0));
    for(int i=0;i<3;i++)
    {
        ob.show();
        cout<<"---------------------"<<endl;
        Sleep(2000);
    }
    return 0;
}

