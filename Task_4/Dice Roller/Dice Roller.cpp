/*
 ======================================================================================================================
 Name                : Dice roller.cpp
 Author              : Moataz Elhawary
 Created on	     : Dec 20, 2023
 ======================================================================================================================
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

int rollDie();

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    cout << "Welcome to the Dice Rolling Simulator!\n\n";

    char rollAgain;
    do
    {
        // Roll two dice
        int die1 = rollDie();
        int die2 = rollDie();

        // Display the result
        cout << "You rolled a " << die1 << " and a " << die2 << ".\n";
        cout << "Total: " << die1 + die2 << "\n\n";

        // Ask the user if they want to roll again
        cout << "Roll again? (y/n): ";
        cin >> rollAgain;

        // Clear the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
    while (rollAgain == 'y' || rollAgain == 'Y');

    cout << "Thanks for playing the Dice Rolling Simulator!\n";

    return 0;
}


int rollDie()
{
    return rand() % 6 + 1; // Generate a random number between 1 and 6
}
