// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Week 7 lab question 2

#include <iostream>

using namespace std;

int main()
{
    // Stting up tax rates and hours
    double ssTax, fedTax, stateTax;
    int hours;

    // Input for hours work in full hours
    cout << "Please provide your hours work: ";
    cin >> hours;

    // The calculations for net pay
    double gross_pay = (hours * 16.78) + ((hours - 40) * 16.78 * 1.5);
    ssTax = gross_pay * 0.06;
    fedTax = gross_pay * 0.14;
    stateTax = gross_pay * 0.05;
    double net_pay = gross_pay - (ssTax + fedTax + stateTax + 10);

    // Displaying the final results
    cout <<  "The gross pay is " << gross_pay;
    cout << "\nThe Social Security tax is " << ssTax;
    cout << "\nThe Federal Income tax is " << fedTax;
    cout << "\nThe State Income tax is " << stateTax;
    cout << "\nThe union due is $10";
    cout << "\nThe Net Pay is " << net_pay;

    return 0;
}