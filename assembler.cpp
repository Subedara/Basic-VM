#include <iostream>
#include <vector>
#include <fstream>
#include <unordered_map>

using namespace std;


namespace extrafuncs {
    vector<string> split(string s) {
        vector<string> res = {};
        string word = "";
        for (char c : s) {
            if (c == ' ') {
                res.push_back(word);
                word = "";
                continue;
            }
            word += c;
        }
        if (!word.empty()) {
            res.push_back(word);
        }
        return res;
    }
    
}

// Split function to make things easier
using namespace extrafuncs;

vector<string> opcoder(vector<string> line) {

}

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
        vector<string> newLine = split(line);
    }

    return 0;
}