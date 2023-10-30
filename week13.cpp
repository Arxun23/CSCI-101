// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Week 13 Lab 

#include<iostream>

using namespace std;

int main()
{
    //Setting up the array
    const int MAX = 100;
    int a[MAX], used = 0;
    int temp, sum = 0;
    int above = 0; 
    int below = 0;
    double average = 0;

    // Asking the user to enter numbers
    cout << "Enter 10 digits ";
    for( int i = 0; i < 10; i++)
    {
        cin >> a[i];
        used = used + 1;
    }

    // Setting up the reverse
    for ( int j = 0; j < used; j++)
    {
        cout << a[9 - j] << " ";
    }

    // Removing an array element
    for (int r = 0; r < used; r++)
    {
        a[r] = a[r + 1];
    }
    used = used - 1;

    // Allowing users to enter two new number
    cout << "\nEnter a new number: "; 
    cin >> a[9];
    used = used + 1;
    cout << "Enter another number: ";
    cin >> a[10];
    used = used + 1;

    // Removing the third array element
    for (int r = 2; r < used; r++)
    {
        a[r] = a[r + 1];
    }
    used = used - 1;

    //Displaying the new set
    cout << "Current the set is: ";
    for (int d = 0; d < used; d++)
    {
        cout << a[d] << " ";
    }

    // Calculating and displaying numbers above the average
    for( int s = 0; s < used; s++)
    {
        sum = sum + a[s];
    }
    average = sum / used;

    cout << "\nThe average of the set is: " << average;

    for (int c = 0; c < used; c++)
    {
        if (a[c] > average)
        {
            above =above + 1;
        }
        else if (a[c] < average)
        {
            below = below + 1;
        }
    }

    cout << "\nThere are " << above << " elements above the average";
    cout << "\nThere are " << below << " elements below the average";

    return 0;
}