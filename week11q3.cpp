// Luis Sanjuan-Cruz
// CSCI-1010
// Week 11 Lab Question 3

#include<iostream>

using namespace std;

int main()
{
    // Setting up variables
    long pi; 
    long i;
    
    //For loop
    for( i = 2; i <= 99, i += 1;)
    {
        if ((i % 2) == 0)
        {
            pi = pi + (1 / (2 * i + 1));
            
        }
        else
        {
            pi = pi - (1 / (2 * i + 1));
            
        }
    }
    
    cout << pi; 
    return 0;
}