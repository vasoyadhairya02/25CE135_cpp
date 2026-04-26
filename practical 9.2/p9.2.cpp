#include "header.h"
#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int runProgram() {
    string line, word;
    map<string, int> freq;

    cout << "Enter sentence: ";
    getline(cin, line);

    stringstream ss(line);

    
    while (ss >> word) {
        freq[word]++;   
    }

    
    cout << "\nWord Frequencies:\n";
    for (auto it : freq) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
