#include <iostream>
using namespace std;

class A
{
    public:
    int b1;
    void get()
    {
        cout << "Enter book  price: ";
        cin >> b1;
    }
    int show()
    {
        return b1;
    }
};
int main()
{
    A ob[3];
    for (int i = 0; i < 3; i++)
    {
        ob[i].get();
    }
    int max = ob[0].show();
    for (int i = 1; i < 3; i++)
    {
        if (ob[i].show() > max)
        {
            max = ob[i].show();
        }
    }
    cout << "\nThe maximum price of book is: "<<max<< endl;
    return 0;
}
