// Luis Sanjuan-Cruz   
// CSCI-1010 Section 1
// Week 10 labs question 1

#include <iostream>

using namespace std;

int main()
{
    // Setting loop variables
    double i = 1;
    double sum;

    // The loop itself
    while (i <= 20)
    {
        sum = (1/i) + sum;
        i++;
    }
    cout << "The result is: " << sum; 
    return 0;
}