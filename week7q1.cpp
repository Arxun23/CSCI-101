// Luis Sanjuan-Cruz
// CSCI 1010 Section 1
// Week 7 Lab Question One

#include<iostream>

using namespace std ;

int main()
{
    // All 12 parts of the EAN, split into two for easy reading
    int first, second, third, fourth, fifth, sixth;
    int seventh, eighth, nineth, tenth, eleventh, twelfth;

    // Asking user for an input
    cout << "Please enter the 12 digits, use space to seperate: \n";
    cin >> first, second, third, fourth, fifth, sixth, seventh, eighth, nineth, tenth, eleventh, twelfth; 

    // The equation to get the checking digit
    int step_1 = (second + fourth + sixth + eighth + tenth + twelfth );
    int step_2 = (first + third + fifth + seventh + nineth + eleventh );
    int step_3 = (step_1 * 3) + step_2;
    int check_digit = (9 - ((step_3 - 1) % 10));  

    // The end result
    cout << "The checking digit is: " << check_digit;

    return 0;
}