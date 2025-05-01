#include<iostream> // Includes the input-output stream library for standard input/output operations
using namespace std; // Avoids the need to prefix 'std::' with standard library functions

// Custom exception class to handle invalid amounts
class InvalidAmountError : public runtime_error
{
    public:
    // Constructor to initialize the exception message
    InvalidAmountError(string msg) : runtime_error(msg)
    {};
};

// Class representing a customer in a bank
class customer
{
    string name; // Private member to store the name of the customer
    int balance, account_no; // Private members to store the account balance and account number

    public:
    // Constructor to initialize customer details
    customer(string name, int balance, int account_no)
    {
        this->account_no = account_no; // Initializes account number
        this->balance = balance; // Initializes account balance
        this->name = name; // Initializes customer name
    }

    // Method to deposit an amount into the account
    void deposit(int amount)
    {
        if(amount <= 0) // Checks if the deposit amount is invalid
        {
            // Throws a custom exception for invalid deposit amount
            throw InvalidAmountError("Invalid amount! Please enter an amount greater than 0.");
        }

        // Adds the valid deposit amount to the balance
        balance += amount;
        cout << amount << " Rs has been credited to your account." << endl;
    }

    // Method to withdraw an amount from the account
    void withdrawl(int amount)
    {
        if(amount > 0 && amount <= balance) // Checks if the withdrawal amount is valid and within balance
        {
            // Deducts the withdrawal amount from the balance
            balance -= amount;
            cout << amount << " Rs has been withdrawn from your account." << endl;
        }
        else if(amount <= 0) // Checks if the withdrawal amount is invalid
        {
            // Throws an exception for invalid withdrawal amount
            throw runtime_error("Invalid amount! Withdrawal amount must be greater than 0.");
        }
        else
        {
            // Throws an exception for insufficient account balance
            throw runtime_error("Insufficient balance in your account.");
        }
    }
};

// Main function demonstrating the functionality
int main()
{
    // Create a customer object with sample data
    customer c1("jitendra sharma", 1000, 22);
    
    try
    {
        // Attempt to deposit a valid amount
        c1.deposit(1000);
        
        // Attempt to withdraw an amount exceeding the balance (throws an exception)
        c1.withdrawl(2200);
    }
    catch(const InvalidAmountError &error) // Handles the custom exception for invalid amounts
    {
        cout << "Exception occurred: " << error.what(); // Displays the exception message
    }
    catch(...) // Default catch block for handling any other exceptions
    {
        cout << "An exception occurred in the program." << endl; // Displays a generic error message
    }

    return 0; // Exit the program
}