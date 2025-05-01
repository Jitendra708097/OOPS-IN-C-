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
        age = a;
        cout<<"Constructor is called "<<age<<endl;
    }

    ~Customer()
    {
        cout<<"Destructor is called "<<age<<endl;
    }

};

int main()
{
    Customer A1(1),A2(2),A3(3);
    Customer *A4 = new Customer(4);
    delete A4;

}