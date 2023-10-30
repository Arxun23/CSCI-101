#include <iostream>

using namespace std;

int main()
{
    double shortsp, shirtsp, tax, grand_total, total;

    cout << "Welcome to the East Carolina Dowdy Student Store \n";
    cout << "Please enter the amount of t-shirts about to be purchased "; 
    cin >> shirtsp;
    cout << "Please enter the amount of shorts about to be purchased "; 
    cin >> shortsp;

    total = ((shortsp * 10.99) + (shirtsp * 7.89)) ;
    tax = total * 0.075;
    grand_total = total + tax ;

    cout << "Your total will be " << grand_total; 
    cout <<"\nThank you for shopping! Go Pirates!!";

    return 0;   
}