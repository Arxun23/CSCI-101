// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Lab week 10 Question 3

#include <iostream>

using namespace std;

int main()
{
    // Setting up loop variables
    double i = 1;
    double sum;

    // The loop itself
    while ( i <= 20 )
    {
        sum = (1/i) + sum;
        i++;
        sum = sum - (1/i);
        i++;
    }

    // Display result
    cout << "The result is: " << sum;

}