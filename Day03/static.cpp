// they are attribute of classes or class member
// static data member
// it is declared usign static keyword
// it is initiliase before any object of this class is created
// only one copy of that entire class is shared by all the object
#include<iostream> // Includes the input-output stream library for standard input and output
using namespace std; // Avoids the need to prefix 'std::' to standard library functions

// Definition of the 'customer' class
class customer
{
    string name; // Stores the name of the customer
    int account_number, balance; // Stores account details and balance
    static int total_customer; // Static variable to keep track of the total number of customers
    static int total_balance; // Static variable to store the total balance across all customers

    public:
    // Constructor to initialize a new customer
    customer(string name, int account_number, int balance)
    {
        this->name = name; // Initialize name
        this->account_number = account_number; // Initialize account number
        this->balance = balance; // Initialize balance
        total_customer++; // Increment the total customer count
        total_balance += balance; // Add balance to the total balance
    }

    // Static member function: Can access only static members of the class
    static void access()
    {
        cout << "Total number of customers: " << total_customer << endl; // Displays total customers
        cout << "Total balance in accounts: " << total_balance << endl; // Displays total balance
    }
    
    // Function to deposit an amount into the customer's account
    void deposit(int amount)
    {
        if(amount > 0) // Check if the deposit amount is valid
        {
            balance += amount; // Add the amount to the customer's balance
            total_balance += amount; // Update the total balance
        }
        else
        {
            cout << "Sorry, we can't deposit balance in your account: " << endl; // Error message for invalid deposit
        }
    }

    // Function to withdraw an amount from the customer's account
    void withdraw(int amount)
    {
        if(amount < balance && amount > 0) // Check if withdrawal is valid and sufficient balance exists
        {
            balance -= amount; // Deduct the amount from the customer's balance
            total_balance -= amount; // Update the total balance
        }
        else
        {
            cout << "Insufficient balance in your account: " << endl; // Error message for invalid withdrawal
        }
    }

    // Function to display the details of the customer
    void display()
    {
        cout << name << " " << account_number << " " << balance << " " << total_customer << endl; // Display customer details
    }

    // Function to display the total number of customers directly
    void display_total()
    {
        cout << total_customer << endl; // Display total number of customers
    }
};

// Initialize static member variables
int customer::total_customer = 0; // Keeps track of the total number of customers
int customer::total_balance = 0; // Keeps track of the total balance

// Main function
int main()
{
    // Creating customer objects with sample data
    customer A1("jitendra sharma", 7080, 2000);
    customer A2("kanhaiya sharma", 7088, 3000);
    customer A3("subhi sharma", 7085, 4000);

    // Perform deposit operations
    A2.deposit(5000); // Deposit 5000 to customer A2's account
    A3.deposit(1000); // Deposit 1000 to customer A3's account

    // Perform withdrawal operation
    A1.withdraw(1000); // Withdraw 1000 from customer A1's account

    // Display individual customer details
    A1.display(); // Display details of customer A1
    A2.display(); // Display details of customer A2
    A3.display(); // Display details of customer A3

    // Access static information about total customers and balance without creating an object
    customer::access();

    return 0;
}