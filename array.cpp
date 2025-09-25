#include<iostream>
using namespace std;

int main()
{
    int a[3]={30,40,50};
    int i,max=0;
    for(i=0;i<=2;i++)
    {
        
        cout<<a[i]<<endl;
        if(a[i]>=max)
        {
            max=a[i];
        }

    }
    cout<<max<<endl;
    return 0;
}