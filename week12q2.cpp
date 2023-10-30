// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Week 12 Lab Question 2

#include<iostream>

using namespace std;

int main()
{
    // Setting up array
    int group[10]; 
    int lowest; 
    int sum(0), even_num(0);

    //Asking for input
    cout << "Enter 10 numbers: ";

    //The for and CIN 
    for (int i = 0; i < 10; i++)
    {
        cin >> group[i];
        if (i == 0)
        {
            lowest = group[0];
        }
        if( group[i] < lowest)
        {
            lowest = group[i];
        }

        sum = sum + group[i];

        if( (group[i] % 2) == 0)
        {
            even_num = even_num + 1;
        }

    }

    // Displaying the results
    cout << "The smallest number is: " << lowest << endl;
    cout << "The sum is: " << sum << endl;
    cout << "There are are " << even_num << " even numbers" << endl;

    return 0;
}