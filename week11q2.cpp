// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Week 11 Lab 1

#include<iostream>

using namespace std;

int main()
{
    // Setting up intergers
    int num1, num2, R, GCD;

    // Asking user to enter two digits
    cout << "Please enter two digits to find the GCD: " << endl;
    cin >> num1 >> num2;

    // Calculating the GCD
    if ( num1 == 0)
    {
        GCD = num2;
    }
    else if (num2 == 0 )
    {
        GCD = num1;
    }
    else 
    {
        while ( (num1%num2) > 0)
        {
            R = num1 % num2;
            if( R == 0)
            {
                GCD = num2;
            }
            else
            {
                num1 = num2;
                num2 = R;       
            }
        }

    }
    

    // Displaying result
    cout << "The GCD is: " << num2;

    return 0;
}