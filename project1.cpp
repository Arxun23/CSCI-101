// Luis Sanjuan-Cruz
// CSCI-1010: Section 1
// Project 1: The Guessing Game

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(void)
{
    //Setting variables
    srand(time(0));
    int guess, choice, num;

    //Main menu
    while (1)
    {
    cout << "Welcome to The Guessing Game" << endl;
    cout << "Select an option" << endl;
    cout << "1. Begin the game" << endl;
    cout << "2. Exit the program" << endl;
    cin >> choice;

    if (choice == 1)
    {
        // The game itself
        num = rand() % 100 + 1;
        for(int i = 1; i <= 10; i++)
        {
            cout << "Enter a number. This is attempt number " << i << endl;
            cin >> guess;
            if ( guess > num)
            {
                cout << "Too high" << endl;
            }
            if ( guess == num)
            {
                cout << "Congrats" << endl;
                break;
            }
            if (guess < num)
            {
                cout << "Too low" << endl;
            }
            if (i == 9)
            {
                cout << "Too bad try again later" << endl;
            }
        }
    }
    else if ( choice == 2)
    {
        cout << "Thanks for playing"; 
        break;
    }
    else 
    {
        cout << "Invalid Option";
    }
    }
    return 0;
}