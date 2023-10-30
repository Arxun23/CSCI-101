// Luis Sanjuan-Cruz
// CSCI-1010
// Week 8 Lab Question 3

#include<iostream>

using namespace std;

int main()
{
    // Setting up variables
    int weight, height, age; 
    double bmr;
    char gender;
    // Asking user for input
    cout << "Enter M for male and F for female: ";
    cin >> gender;
    cout << "Enter the weight (in pounds), height (in inches), and age : ";
    cin >> weight >> height >> age;

    // calculating BMR
    if ( char gender = 'M' )
    {
        bmr = 66 + (6.3 * weight ) + (12.9 * height) - (6.8 * age);
    }
    else if (char gender = 'F')
    {
        bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
    }

    // Converting BMR into chocolate bars
    double bars = bmr / 230;
    cout << "You can eat about " << bars <<" chocolate bars.";

    return 0;
}