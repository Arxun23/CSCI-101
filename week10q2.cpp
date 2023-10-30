// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Week 10 Lab Question 2

#include<iostream>

using namespace std;

int main()
{
    // Setting up loop variables
    int i=1;
    int sum=0, input;

    // Asking for input
    cout << "Enter an integer: ";
    cin >> input ;

    // The loop itself
    while ( i <= input)
    {
        if(i % 2 == 0) 
        {
            sum += i;
        }
        i+=1;
    }
    
    // Displaying result
    cout << "The sum of all the even numbers is: " << sum;

    return 0;
}
