// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Week 8 Lab, Question 1

#include<iostream>

using namespace std;

int main()
{
    // Setting up the angles
    int angle1, angle2, angle3;

    // Asking user to input angles.
    cout << "Please enter the three angle. \n"; 
    cin >> angle1;
    cin >> angle2;
    cin >> angle3;

    // Determining if it's a triangle or not
    int total = angle1 + angle2 + angle3;
    if (total == 180)
    {
        cout << "That is in fact a triangle";
    }
    else 
    {
        cout << "That is not a triangle";
    }
    
    return 0;
}