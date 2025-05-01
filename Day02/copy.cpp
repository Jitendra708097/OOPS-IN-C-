#include<iostream>
using namespace std;
class Customer
{
    public:
    string name;
    int age;
    int balance,account_number;


      Customer()
      {

      }
    Customer(string name,int age,int balance,int account_number)
    {
    //    (*this).name = name;
    //    (*this).balance = balance;
    //    (*this).account_number = account_number;
    //    (*this).age = age;

    //  Both are same techinque using pointer but little symbol different
    this->name = name;
    this->balance = balance;
    this->account_number = account_number;
    this->age = age;
    }

    // if created manually copy constructor then no default constructor is create in program
    Customer(Customer &B)
    {
       name = B.name;
       balance = B.balance;
       account_number = B.account_number;
       age = B.age;
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
    Customer A1("Jitendr sharma",20,5000,220194);
    A1.print();
    Customer A2(A1);  // it copy cunstructor which is created by default in class all values copy to this object
    A2.print();

    Customer A5;
    A5 = A1;     // this copy the values of customer A1 using assingment operator
    A5.print();

    
}