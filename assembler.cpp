#include <iostream>
#include <fstream>

using namespace std;

// Main logic
int main() {
    
    ifstream file("main.bvm");
    string line;
    while(getline(file, line)) {
        cout << line << "\n";
    }

    return 0;
}