#include<iostream>
using namespace std;

class Student
{
    public:
    void show(int id,string name)
    {
        cout<<"Student ID : "<<id<<endl;
        cout<<"Student Name : "<<name<<endl;
    }
};
int main()
{
    Student ob,ob1,ob2;
    ob.show(101,"John");
    ob1.show(102,"bob");
    ob2.show(103,"Charlie");
    return 0;
}