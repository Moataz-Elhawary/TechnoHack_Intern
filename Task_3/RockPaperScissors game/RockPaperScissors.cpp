#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    while (1)
    {

    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    // Generate a random number between 1 and 3 for the computer's choice
    int computerChoice = rand() % 3 + 1;

    // Player's choice
    int playerChoice;

    // Display menu
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> playerChoice;

    // Validate user input
    if (playerChoice < 1 || playerChoice > 3) {
        cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        return 1;
    }

    // Display choices
    cout << "You chose ";
    switch (playerChoice) {
        case 1:
            cout << "Rock";
            break;
        case 2:
            cout << "Paper";
            break;
        case 3:
            cout << "Scissors";
            break;
    }
    cout << endl;

    cout << "Computer chose ";
    switch (computerChoice) {
        case 1:
            cout << "Rock";
            break;
        case 2:
            cout << "Paper";
            break;
        case 3:
            cout << "Scissors";
            break;
    }
    cout << endl;

    // Determine the winner
    if (playerChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }
    cout<< "=============================================================\n";
    }

    return 0;
}
