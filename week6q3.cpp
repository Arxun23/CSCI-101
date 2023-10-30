#include <iostream>

using namespace std;

int main()
{
    int year, month, day;
    
    cout << "Enter a four digit number for the year: ";
    cin >> year;
    cout << "Please enter a number for the month. Use the numbers 1-12 to represent Jan.-Dec. ";
    cin >> month;
    cout << "Please enter a number for the date. Using 1-31: ";
    cin >> day;

    int yo = year - (14 - month) / 12;
    int x = yo + yo / 4- yo / 100 + yo / 400;
    int mo = month + 12 * ((14 - month) / 12) - 2;
    int dayof = (day + x + (31 * mo) / 12) % 7; 

    cout << "The day of the week is : " << dayof;

    return 0;
}