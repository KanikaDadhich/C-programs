#include <iostream>
using namespace std;

class Employee
{
public:
    int emp_id;
    string emp_name;

    void input()
    {
        cout << "Enter employee ID: ";
        cin >> emp_id;
        cout << "Enter employee Name: ";
        cin >> emp_name;
    }

    void display()
    {
        cout << "Employee ID : " << emp_id << endl;
        cout << "Employee Name : " << emp_name << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee *p = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of employee "<< endl;
        p[i].input();
    }

    cout << "\nEmployee Details "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout <<"\nEmployee  details:"<<endl;
        p[i].display();
    }

    delete[] p;

    return 0;
}
