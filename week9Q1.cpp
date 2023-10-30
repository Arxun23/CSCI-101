// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Week 9 lab Question 1
// Calculating credit card payments

#include <iostream>

using namespace std;

int main()
{
    // Establishing variables
    double balance, interest, min_payment;
    double amount_due; 

    // Asking user for input
    cout << "Please enter the account balance: $";
    cin >> balance;

    // Calculating interest owed
    if (balance <= 1000 && balance > 0)
    {
        interest = balance * 0.015;
    }
    else if (balance > 1000)
    {
        interest = ((balance - 1000) * 0.01) + (1000 * 0.015);
    }
    else
    {
        cout << "Amount not recognized";
    }
    amount_due = interest + balance;
    // Calculating min payment
    if ( ( (amount_due) * 0.10) <= 10)
    {
        min_payment = 10;
    }
    else 
    {
        min_payment = ( (interest + balance) * 0.10);
    }

    // Displaying Result 
    cout << "The interest due is $" << interest; 
    cout << "\nThe total amount is $" << amount_due;
    cout << "\nThe minimum payment is $" << min_payment;

    return 0;
}