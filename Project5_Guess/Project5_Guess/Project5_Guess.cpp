#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    srand(time(0));  // Seed random number generator with current time
    int secret = rand() % 100 + 1;  // Random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secret) {
            cout << "Too high, try again.\n";
        }
        else if (guess < secret) {
            cout << "Too low, try again.\n";
        }

    } while (guess != secret);

    cout << "🎉 Congratulations! You guessed the number in " << attempts << " tries.\n";
    return 0;
}