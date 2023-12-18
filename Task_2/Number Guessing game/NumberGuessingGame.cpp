#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess, attempts = 0;

    cout << "Welcome to the Number Guessing Game! :)   " << endl;
    cout << "Try to guess the number between 1 and 100." << endl;

    do {
        // Get user input
        cout << "Enter your guess: ";
        cin >> guess;

        // Check if the guess is correct
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        } else {
            // Provide hints to the user
            if (guess < secretNumber) {
                cout << "Too low! Try again." << endl;
            } else {
                cout << "Too high! Try again." << endl;
            }
            attempts++;
        }
    } while (guess != secretNumber);

    return 0;
}
