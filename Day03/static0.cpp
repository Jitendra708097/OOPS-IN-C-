#include<iostream>
using namespace std;

class Customer
{
    string name;
    int balance,account_no;
    static int total_customer;
    static int total_balance;
     
    public:
    Customer(string name,int account_no,int balance)
    {
        this->name = name;
        this->balance = balance;
        this->account_no = account_no;
        total_customer++;
        total_balance+=balance;
    }
     
    // deposit balnce in bank
    void addbalance(int bal)
    {
        if(bal<0)
        {
             cout<<"We can't this amount "<<endl;
        }
        else
        {
            balance+=bal;
            total_balance+=bal;
        }
    }

    // withdraw amount from bank 
    void withdraw(int amount)
    {
        if(amount>balance)
        {
            cout<<"Insuffecient balance in your account"<<endl;
        }
        else
        {
            balance-=amount;
            total_balance-=amount;
            cout<<"Amount withdrawl successfuly"<<endl;
        }
    }

    void display()
    {
        cout<<"Account Holder Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Account Number: "<<account_no<<endl;
    }

   static void totalC()
    {
        cout<<"Total Customers : "<<total_customer<<endl;
        cout<<"Total balance in bank : "<<total_balance<<endl;
    }
};

int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main()
{
  
    Customer A1("jitendra sharma",2,1000);
    Customer A2("Anshul Yadav",55,3000);
    Customer A3("Ravi Yadav",55,2000);
    A1.addbalance(500);
    
    // A1.display();
    // A2.display();
    // A3.display();
    // A1.totalC();
    A2.withdraw(2000);
    A3.withdraw(3000);
    A1.display();
    A2.display();
    A3.display();
    Customer::totalC();
}