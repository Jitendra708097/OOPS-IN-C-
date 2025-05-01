#include<iostream>
using namespace std;
class Customer
{
    public:
    string name;
    int age;
    int balance,account_number;


    Customer(string name,int age,int balance,int account_number)
    {
    //    (*this).name = name;
    //    (*this).balance = balance;
    //    (*this).account_number = account_number;
    //    (*this).age = age;

    this->name = name;
    this->balance = balance;
    this->account_number = account_number;
    this->age = age;
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
    Customer A2("Jitendr sharma",20,5000,220194);
    A2.print();
}