// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Week 11 Lab Question

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    // Setting up options and variables
    int choice;
    double num, answer;

    // Displaying menu and way out
    while (1)
    {
    cout << "Welcome to the Scientific Calculator." << endl;
    cout << "Enter a number that matches your choice" << endl;
    cout << "1. Squared" << endl;
    cout << "2. Square Root" << endl;
    cout << "3. Exit" << endl;
    cin >> choice;
    if( choice == 3)
    {
        cout << "Thank you using out calculator. Have a great day ^_^";
        break; 
    }
    cout << "Enter the number you'd like squareed/squared-rooted: ";
    cin >> num;

    // The options being calculated
    if (choice == 1)
    {
        answer = pow(num, 2);
        cout << num << "^2 is: " << answer << endl;
    }
    else if (choice == 2)
    {
        answer = sqrt(num);
        cout << "Sqrt of " << num << " is " << answer << endl;
    }
    else
    {
        cout << "*******Option is not valid*******" << endl; 
    }
    }
    return 0;
}