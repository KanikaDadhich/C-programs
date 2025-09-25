#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter a Number : ";
    cin>>no;
    if (no < 0) {
        goto invalid;
    }
    cout << "You entered a positive number." << endl;
    return 0;

    invalid: cout << "Invalid input! Please enter a positive number." << endl;
    return 0;

    
}


