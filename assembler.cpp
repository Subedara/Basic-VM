#include <iostream>
#include <fstream>

using namespace std;

// Main logic
int main() {
    string input, output;
    cout << "Which file to read: ";
    cin >> input;
    ifstream file(input);
    cout << "Name of the resultant file: ";
    cin >> output;
    ofstream outputFile(output);
    string line;
    while(getline(file, line)) {
        outputFile << line << "\n";
    }

    return 0;
}