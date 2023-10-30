#include <iostream>

using namespace std;

int main()
{
    double F, C;

    cout << "Please enter the temperatur in Celsius: ";
    cin >> C;
    
    F = ( C * 1.8 ) + 32; 

    cout << "The temperature in Ferenhiet is: " << F; 
    return 0;
}