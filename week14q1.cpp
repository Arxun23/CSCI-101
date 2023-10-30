// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Lab Weekv14

#include<iostream>

using namespace std;

// The function to check for range
int check(int check_point, int num1, int num2)
{
    int in_range;
    if((num1 < check_point && num1 >= 0) && (num2 < check_point && num2 >= 0))
    {
        in_range = 1;
    }
    else 
    {
        in_range = 0;
    }

    return in_range;
}

// The main function
int main()
{
    // Setting up variables
    int check_value, numA, numB;

    // Asking users for input
    cout << "Enter Two Numbers: ";
    cin >> numA >> numB;
    cout << "Enter a Checkpoint: ";
    cin >> check_value;

    // Amount in range output
    if (check(check_value, numA, numB) == 1)
    {
        cout << "Both are in range";
    }
    else
    {
        cout << "None are in range";
    }
}