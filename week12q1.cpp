// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Lab week 12 Question 1

#include<iostream>

using namespace std;

int main()
{
    // establishing variables
    int num1, amount_of_digits, R;

    // Asking user for input
    cout << "Enter an integer: ";
    cin >> num1;

    // The while statement
    while( R > 0)
    {
        R = (num1 / 10);
        if( R >= 0)
        {
            amount_of_digits += 1;
            num1 = R;
        }
    }

    // display results
    cout << "This integer has " << amount_of_digits << " digits.";
    return 0;
}