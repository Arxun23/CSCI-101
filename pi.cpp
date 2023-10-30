// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Assignment 5

#include<iostream>
#include <math.h>

using namespace std;

int main()
{
    int i = 3 ;
    float sum = 1;
    float pi;
    while( i <= 99 )
    {
       sum = sum - pow(i, -1);
       i += 2;
       sum = sum + pow(i, -1);
       i += 2;
    }

    pi = sum * 4;
    cout << "The value of PI is: " << pi;
    return 0;
}