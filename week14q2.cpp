// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Week 14 lab Question 2

#include<iostream>
#include<math.h>

using namespace std;

// The poly function
int poly(int num)
{
    int solved;
    solved = 3 * pow(num, 5) + 2 * pow(num, 4) - 5 * pow(num, 3) - pow(num, 2) + 7 * num - 6;
    return solved;
}

// The main function
int main()
{
    // Inserting the numbers
    cout << "When the x is 5, the polynomial is: " << poly(5) << endl;
    cout << "When the x is 8, the polynomial is: " << poly(8) << endl;
    return 0;
}