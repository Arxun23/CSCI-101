// Luis Sanjuan-Cruz
// CSCI-1010
// Week 8 Lab Question 2

#include<iostream>

using namespace std;

int main()
{
    // Establishing intergers
    int number;

    // Asking user for input
    cout << "Input a number (no more than 4) and find out how many digits it has \n";
    cin >> number;

    // Determining how many digits are in it
    if (1000 <= number && number <= 9999)
    {
        cout << "It is four digits";
    }
    else if (100 <= number && number <= 999)
    {
        cout << "It is three digits";
    }
    else if (10 <= number && number <= 99)
    {
        cout << "It is two digits";
    }
    else if (0 <= number && number <= 9)
    {
        cout << "It's just one digit";
    }
    else
    {
        cout << "Error: Invalid Format";
    }

    return 0;
}