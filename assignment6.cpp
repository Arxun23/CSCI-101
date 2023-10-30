// Luis Sanjuan-Cruz
// CSCI-1010 Seection 1
// Assignment 6

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main ()
{
    // Setting up random num generation
    srand(time(0));

    // Setting up the array and other int
    const int MAX(20);
    int a[MAX];
    int min, temp;

    //Generating random num
    cout << "After intializing the array, the numbers are: " << endl;
    for( int i = 0; i < MAX; i++)
    {
        a[i] = rand() % 100 + 1;
        cout << a[i] << "\t";
    }

    // Sorting num in descending
    cout << "\nAfter sorting the elements the array is: " << endl;
    for ( int i = 0; i < MAX; i++)
    {
        for( int j = i + 1; j < MAX; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j]= temp;
            }
        }
    }
    for (int i = 0; i < MAX; i++)
    {
        cout << a[i] << "\t";
    }

    // Reversing the array
    cout << "\nAfter reversing the elements the array is: " << endl;
    for ( int i = 0; i < MAX; i++)
    {
        for( int j = i + 1; j < MAX; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j]= temp;
            }
        }
    }
    for (int i = 0; i < MAX; i++)
    {
        cout << a[i] << "\t";
    }
}