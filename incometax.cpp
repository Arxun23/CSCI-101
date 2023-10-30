// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Assignment 4 Question 2
#include <iostream>

using namespace std;

int main()
{
    // Setting up income intergers
    double income, tax;

    // Asking for income amount
    cout << "Enter the income: ";
    cin >> income; 

    // Calculating Tax
    if (0 >= income && income <= 750)
    {
        tax = income * 0.01;
    }    
    else if (750 > income && income <= 2250)
    {
        tax =  ( 7.5 + ( ( income - 750 ) * .02 ) );
    }
    else if (2250 > income && income <= 3750)
    {
        tax = (37.5 + ( ( income - 2250 ) * 0.03) );
    }
    else if ( 3750 > income && income <= 5250)
    {
        tax = (82.5 + ( (income - 3750) * 0.04) );
    }
    else if (5250 < income)
    {
        tax = (142.5 + ( (income - 5250) * 0.05) );
    }
    else if (income < 0)
    {
        cout << "It must be a positive integer";
    }

    // Displaying result
    cout << "The tax due is : " << tax;

    return 0;
}