#include<iostream>
using namespace std;

class ATM
{
    public:
    int amt,bal=1000;
    void withdraw()
    {
        cout<<"Enter amount to withdraw : ";
        cin>>amt;
        if(amt<=bal && amt>0)
        {
            bal=bal-amt;
            cout<<"withdraw amount : "<<amt<<endl;
            cout<<"Total Balance : "<<bal<<endl;
        }
        else
        {
            cout<<"Insufficient balance "<<endl;
        }
        
    }
    void deposite()
    {
        cout<<"Enter amount to Depostie : ";
        cin>>amt;
        if(amt>0)
        {
            bal=bal+amt;
            cout<<"Depostied amount : "<<amt<<endl;
        }
        else
        {
            cout<<"Invalid amount "<<endl;
        }
    }
    void balance()
    {
        cout<<"Total balance is : "<<bal<<endl;
    }
};

int main()
{
    ATM ob;
    ob.balance();
    ob.deposite();
    ob.withdraw();
    return 0;
}