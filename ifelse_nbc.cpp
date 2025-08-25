#include<iostream>
using namespace std;

int main()
{
    char branch;
    int total_amt;
    cout<<"Select your location"<<endl;
    cout<<"J for Jagatpura"<<endl;
    cout<<"S for Sitapura"<<endl;
    cout<<"R for Rajapark"<<endl;
    cout<<"Enter branch ";
    cin>>branch;
    cout<<"Enter total amount";
    cin>>total_amt;
    if(branch =='J' || branch == 'S')
    {
        if(total_amt>600)
        {
            total_amt=total_amt/2;
            cout<<"Offer available 50% discount , your Payble amout after discount is : "<<total_amt;
        }
        else{
            
				cout<<"Sorry , Offer is only available above 600 , you have to pay full amount";
        }
    }
    else
    {
        cout<<"Sorry ! , In this branch offer is not available ,your payble amount is : "<<total_amt;
    }
    return 0;
}