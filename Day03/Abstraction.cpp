// Displaying only essential information & hiding the details

#include<iostream> // Includes the input-output stream library for displaying output and taking input
using namespace std; // Avoids the need to prefix 'std::' to standard library functions

// Define a class named 'customer'
class customer
{
    string name; // To store the name of the customer
    int account_number, balance, age; // To store account details, balance, and age
    
    public:
    // Constructor to initialize customer details
    customer(string name, int account_number, int balance, int age)
    {
        this->name = name; // Assign name
        this->account_number = account_number; // Assign account number
        this->balance = balance; // Assign initial balance
        this->age = age; // Assign age
    }

    // Function to deposit money into the account
    void deposit(int amount)
    {
        if(amount > 0) // Checks if the deposit amount is valid
        {
            balance += amount; // Adds amount to the balance
        }
        else
        {
            cout << "Sorry we can't deposit balance in your account : " << endl; // Error message for invalid amount
        }
    }

    // Function to update the customer's age
    void updateage(int age)
    {
        if(age > 0 && age < 100) // Checks if the age is in a valid range
        {
           this->age = age; // Updates age
        }
        else
        {
            cout << "Enter valid age " << endl; // Error message for invalid age
        }
    }

    // Function to withdraw money from the account
    void withdraw(int amount)
    {
        if(amount < balance && amount > 0) // Checks if withdrawal is valid and sufficient balance is available
        {
            balance -= amount; // Deducts amount from the balance
        }
        else
        {
            cout << "Insufficient balance in your account : " << endl; // Error message for invalid withdrawal
        }
    }

    // Function to display the customer's details
    void display()
    {
        cout << name << " " << account_number << " " << balance << " " << age << endl; // Prints customer information
    }
};

// Main function to demonstrate functionality
int main()
{
    // Creates customer objects with sample data
    customer A1("jitendra sharma", 7080, 2000, 3);
    customer A2("kanhaiya sharma", 7088, 3000, 5);
    customer A3("subhi sharma", 7085, 40002, 2);

    // Attempts to update age for A2 (Invalid age example)
    A2.updateage(500);
    A2.display(); // Displays A2's details
}

