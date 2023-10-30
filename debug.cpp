// Luis Sanjuan-Cruz    
// CSCI-1010 Section 1
// Assignment 5 Question 1

#include<iostream>

using namespace std;

int main()
{
    double amount, tax;

    cout << "Please enter the amount: ";
    cin >> amount;

    if (amount < 750)
    {
        tax = amount * 0.01;
        cout << "Test 1 for (amount < 750)";
    }
    else if (amount >= 750 && amount < 2250)
    {
        tax = 7.5 + (amount -750) * 0.02;
        cout << "Test 2 for (amount >= 750 || amount < 2250)";
    }
    else if (amount >= 2250 && amount < 3750)
    {
        tax = 37.5 + (amount - 2250) + 0.03;
        cout << "Test 3 for (amount >= 2250 || amount < 3750)";
    }
    else if (amount >= 3750 && amount < 5250)
    {
        tax = 82.5 + (amount - 3750 * 0.04);
        cout << "Test 4 for (amount >= 3750 || amount < 5250)";
    }
    else 
    {
        tax = 142.5 + (amount - 5250) * 0.05;
        cout << "Test 5 for else";
    }

    cout << "The tax due is " << tax << endl;
}