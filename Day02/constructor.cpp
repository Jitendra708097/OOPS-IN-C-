#include<iostream>
using namespace std;
class Customer
{
    public:
    string name;
    int age;
    int balance,account_number;

    // default constructor
    Customer()
    {
        cout<<"Called dafault when object is create"<<endl;
    }

    Customer(int a)
    {
        name = "jitendra sharma";
        balance = 5000;
        account_number = 220194;
        age = a;
    }

    void print()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<account_number<<endl;
        cout<<balance<<endl;
    }
};

int main()
{
    Customer A1,A2(20);
    A2.print();
}