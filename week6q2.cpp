#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double T, V, W;

    cout << "Please enter a number for temperature ";
    cin >> T;
    cout << "Please enter a number for the velocity ";
    cin >> V;

    W = 35.74 + 0.6215 * T + (0.4275 * T - 35.75 ) * pow(V, 0.16); 

    cout << "The effective temperature is: " << W;
    return 0;
}