// wrapping up of data &information in a single unit 
//while controlling accec to them 
// don't give direct access to user this is known as data hiding
// we give access with help of function for to check data is wrong or right
#include<iostream>
using namespace std;
class customer
{
    string name;
    int account_number,balance,age;
    
    public :
    customer(string name,int account_number,int balance,int age)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->age = age;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
        }
        else
        {
            cout<<"Sorry we can't deposit balance in your account : "<<endl;
        }
    }

     void updateage(int age)
    {
        if(age>0 && age<100)
        {
           this->age = age;
        }
        else
        {
            cout<<"Enter valid age "<<endl;
        }
    }

     void withdraw(int amount)
    {
        if(amount<balance && amount>0)
        {
            balance-=amount;
        }
        else
        {
            cout<<"insufficient balance in your account : "<<endl;
        }
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<endl;

    }

   
};

int main()
{
    customer A1("jitendra sharma",7080,2000,3);
    customer A2("kanhaiya sharma",7088,3000,5);
    customer A3("subhi  sharma",7085,40002,2);
    A2.updateage(500);
    A2.display();
}