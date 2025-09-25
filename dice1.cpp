#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    char s;
    cout<<"Dice rolling ..."<<endl;
    do{
        srand(time(0));
        cout<<rand()%6+1<<endl;
        cout<<"you want to play continue y:n : ";
        cin>>s;
    }while(s=='y'||s=='Y');
    cout<<"Well Played";
    return 0;
}