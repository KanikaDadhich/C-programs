#include<iostream>
#include<windows.h>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    cout<<"Car race is start "<<endl;
    srand(time(0));

    int n=(rand()%2+1);
    int i,j;

    if(n==1)
    {

        for(i=(rand()%2+1);i<10;i++)
        {
            for(j=(rand()%2+1);j<=i;j++)
            {
                cout<<"->";
                Sleep(1000);
            }
            cout<<endl;
            cout<<"->";
            Sleep(1000);
        }
    
    }
    else
    {
        for(i=(rand()%2+1);i<10;i++)
        {
            for(j=(rand()%2+1);j<2;j++)
            {
                cout<<"->";
                Sleep(1000);
            }
            cout<<endl;
            cout<<"->";
            Sleep(1000);
        }
    }
    
    if(n==1)
    {
        cout<<"\nCar1 is winner"<<endl;
        return 0;
    }
    else if(n==2)
    {
        cout<<"\nCar2 is winner "<<endl;
        return 0;
    }

    return 0;
}