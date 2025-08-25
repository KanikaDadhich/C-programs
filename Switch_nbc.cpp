#include<iostream>
using namespace std;

int main()
{
	int amount;
	char location;
    cout<<"J : Jagatpura"<<endl;
    cout<<"M : Malvinagar"<<endl;
    cout<<"R : RajaPark"<<endl;
	cout << "Enter your location : ";
    cin >> location;
    cout << "Enter the total bill amount: ₹";
    cin >> amount;
	switch(location)
	{
		case 'J' :
		case 'M' :
			if(amount>600)
			{	amount=amount /2 ;
				cout<<"Offer available 50% discount , your Payble amout after discount is : "<<amount; }
			else
			{ cout<<"Sorry , Offer is only available above 600 , you have to pay full amount";}
			break;
		case 'R':
			cout<<"Sorry ! , In this branch offer is not available ,your payble amount is : "<<amount;
			break;
	}
	return 0;
}
	