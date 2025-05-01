// The try keyword represents a block of code that may throw an
//exception placed inside the try block. it's followed by one
//or more catch blocks.if an exception occurs ,try block 
// throw that exception.

// The catch statement represents a block of code that is executed
//when a particular exception is thrown from the try block.
// The code to handle the exception is written inside the catch block

// An exception in c++ can be thrown using the throw keyword.
// When a paritcular encounters a throw statement, then it immediately
// terminates the current function and starts finding a matching
// catch block to handle the throw exception.


#include<iostream>
using namespace std;
  

  // apne aap bhi exception class bna skte hai bs runtime_error ko inherit krke
class invalidAmounterror : public runtime_error
{
    public:
    invalidAmounterror(const string &msg): runtime_error(msg)
    {};
};
class customer
{
    string name;
    int account_no,balance;

    public : 
    customer(string name,int account_no,int balance)
    {
        this->account_no = account_no;
        this->balance = balance;
        this->name = name;
    };

    // deposit

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<"Balance is deposit succesfully : "<<balance<<"rs\n";
        }

        else
        
        {
            throw invalidAmounterror("balance should be greater than zero");
            //throw runtime_error("balance should be greater than zero");
        }
    }

    // withdraw

    void withdraw(int amount)
    {
        if(amount>0 && amount<balance)
        {
            balance-=amount;
           cout<<"Balance withdraw succesfully : "<<balance<<"rs\n";
        }

        else
        {
            throw "insufficient balance in your account";
        }
    }
};
int main()
{
   customer j("jitendra",5000,7080);
   try{
   j.deposit(100);
   j.withdraw(70800);
   j.deposit(-100);
   }

   
   //catch(const char *e)
   catch(const runtime_error &e)
   {
     cout<<"Exception is occured : "<<e.what()<<endl;
   }
   catch(const bad_alloc &e)
   {
     cout<<"Exception is occured : "<<e.what()<<endl;
   }
   // default bhi chla jayega
   catch(...)
   {
    cout<<"Exception Occured : ";
   } 


}