// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Week 9 Lab Question 2
// A rock-paper-scissor game

#include <iostream>

using namespace std;

int main()
{
    // Setting up variables
    char player_1, player_2;

    // Asking user for input
    cout << "Player 1, please show your choices ";
    cin >> player_1;
    cout << "Player 2 please show your choices ";
    cin >> player_2;

    // Determining the winner
    if (player_1 == 'r' || player_1 == 'R')
    {
        if (player_2 == 's' || player_2 == 'S')
        {
            cout << "Player 1 Wins";
        }
        else if (player_2 == 'p' || player_2 == 'P')
        {
            cout << "Player 2 Wins";
        }
        else if (player_2 == 'r' || player_2 == 'R')
        {
            cout << "It's a tie";
        }
    }
    else if (player_1 == 's' || player_1 == 'S')
    {
        if (player_2 == 'r' || player_2 == 'R')
        {
            cout << "Player 2 Wins";
        }
        else if (player_2 == 'p' || player_2 == 'P')
        {
            cout << "Player 1 Wins";
        }
        else if (player_2 == 's' || player_2 == 'S')
        {
            cout << "It's a tie";
        }
    }
    else if (player_1 == 'p' || player_1 == 'P')
    {
        if (player_2 == 'r' || player_2 == 'R')
        {
            cout << "Player 1 Wins";
        }
        else if (player_2 == 's' || player_2 == 'S')
        {
            cout << "Player 2 wins";
        }
        else if (player_2 == 'p' || player_2 == 'P')
        {
            cout << "It's a tie";
        }
    }
    
    else
    {
        cout << "Oof it appears the letters aren't matching";
    }

    return 0;
}