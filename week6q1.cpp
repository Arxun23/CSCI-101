#include <iostream>

using namespace std;

int main()
{
    int ones, tens, hundreds, number, reversed;

    cout << "Please enter a three digit number: ";
    cin >> number;

    hundreds = number / 100;
    tens = (number % 100) / 10;
    ones = ((number % 100) % 10);

    reversed = (ones * 100) + (tens * 10) + hundreds;

    cout << "The reversed number is: " << reversed;

    return 0;
}