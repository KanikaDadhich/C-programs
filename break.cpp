#include<iostream>
using namespace std;

int main()
{
    int i ;
    cout<<"Break Statement : "<<endl;
    for(i=0;i<=10;i++)
    {
        if(i==3)
        {
            break;
        }
        cout<<i<<endl;
        
    }
    cout<<"Continue Statement  : "<<endl;
    for(i=0;i<=10;i++)
    {
        if(i==3)
        {
            continue;
        }
        cout<<i<<endl;
        
    }
    return 0;
}