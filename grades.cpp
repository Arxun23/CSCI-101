// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Assignment 4 Question 1
#include <iostream>

using namespace std;

int main()
{
    // Setting up grades
    double grade;
    char letter;
    
    // Asking user for input
    cout << "Enter a numeric grade: ";
    cin >> grade;

    // Setting up letter grade assignment
    if ( grade <= 100 && grade >= 90)
    {
        letter = 'A';
    }
    else if ( grade <= 89.9 && grade >= 80)
    {
        letter = 'B';
    }
    else if ( grade <= 79.9 && grade >= 70)
    {
        letter = 'C';
    }
    else if ( grade <= 69.9 && grade >= 60)
    {
        letter = 'D';

    }
    else if ( grade <= 59.9 && grade >= 0)
    {
        letter = 'F';
    }
    else
    {
        cout << "Number not accepted enter a number in between 0-100 \n";
    }

    // Display the result
    cout << "The letter grade is: " << letter;

    return 0;

}