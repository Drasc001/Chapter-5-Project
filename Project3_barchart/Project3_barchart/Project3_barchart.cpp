#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string town, fileName;

    // Ask user for town name and file name
    cout << "Enter town name: ";
    getline(cin, town);

    cout << "Enter data file name: ";
    getline(cin, fileName);

    // Try to open the file
    ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Failed to open file!" << endl;
        return 1;  // Exit if file cannot be opened
    }

    int year, population;

    // Display chart header
    cout << "\n" << town << " Population Growth\n";
    cout << "(Each * represents 1,000 people)\n";

    // Read year and population data
    while (inFile >> year >> population) {
        // Calculate number of stars (divide by 1000 to get the correct number of stars)
        int stars = population / 1000;

        // Output the year and corresponding number of stars
        cout << year << " ";
        for (int i = 0; i < stars; i++) {
            cout << "*";  // Each asterisk represents 1,000 people
        }
        cout << endl;
    }

    // Close the file
    inFile.close();
    return 0;
}
