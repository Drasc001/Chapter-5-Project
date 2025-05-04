#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("LineUp.txt");
    if (!inFile) {
        cerr << "Could not open file!" << endl;
        return 1;
    }

    string name, first, last;
    int count = 0;

    inFile >> name;
    first = last = name;
    count = 1;

    while (inFile >> name) {
        count++;
        if (name < first) first = name;
        if (name > last) last = name;
    }

    cout << "Number of students: " << count << endl;
    cout << "First in line: " << first << endl;
    cout << "Last in line: " << last << endl;

    inFile.close();
    return 0;
}

