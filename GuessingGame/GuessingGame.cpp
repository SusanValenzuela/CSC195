#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int randomNumber = rand() % 10 + 1; // Number between 1 and 10
    int guess;
    int attempts = 5;

    cout << "Guess the number between 1 and 10!""\n";

    while (attempts > 0) {
        cout << "You have " << attempts << " guesses left. Enter your guess: ";
        cin >> guess;

        if (guess == randomNumber) {
            cout << "Correct! You guessed the number!""\n";
            break;
        }
        else if (guess < randomNumber) {
            cout << "Too low! Try again.""\n";
        }
        else {
            cout << "Too high! Try again.""\n";
        }

        attempts--;
    }

    if (attempts == 0) {
        cout << "You're out of attempts! The number was: " << randomNumber << endl;
    }

    return 0;
}
