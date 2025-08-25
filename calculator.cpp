#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"'+'. Addition "<<endl;
    cout<<"'-'. Subtraction "<<endl;
    cout<<"'*'. Multiplication "<<endl;
    cout<<"'/'. Division "<<endl;
    cout<<"Select operator to perform operation : ";
    cin>>op;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    switch(op)
    {
        case '+' :
            cout<<"Addition is : "<<(a+b);
            break;
        case '-' :
            cout<<"Subtraction is : "<<(a-b);
            break;
        case '*' :
            cout<<"Multiplicatin is : "<<(a*b);
            break;
        case '/' :
            cout<<"Division is : "<<(a/b);
            break;
        default:
            cout<<"Please , select correct operator";
            break;

    }
    return 0;
    
}