#include <iostream>
using namespace std;

int main() {
    int days;
    double population, increase;

    // Input validation
    cout << "Enter starting population (min 2): ";
    cin >> population;
    while (population < 2) {
        cout << "Invalid. Enter a population >= 2: ";
        cin >> population;
    }

    cout << "Enter daily increase percentage (non-negative): ";
    cin >> increase;
    while (increase < 0) {
        cout << "Invalid. Enter a non-negative value: ";
        cin >> increase;
    }

    cout << "Enter number of days: ";
    cin >> days;
    while (days < 1) {
        cout << "Invalid. Enter at least 1 day: ";
        cin >> days;
    }

    cout << "\nPopulation Growth:\n";
    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << ": " << population << endl;
        population += population * (increase / 100);
    }

    return 0;
}
