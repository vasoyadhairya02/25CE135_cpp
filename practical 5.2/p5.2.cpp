#include "header.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int runProgram() {
    ifstream file("data.txt");   

    if(!file) {
        cout << "File not found!";
        return 0;
    }

    string line;
    int lines = 0, words = 0, chars = 0;

    while(getline(file, line)) {
        lines++;
        chars += line.length();   

        bool inWord = false;

        for(int i=0;i<line.length();i++) {
            if(line[i] != ' ' && inWord == false) {
                words++;
                inWord = true;
            }
            else if(line[i] == ' ')
                inWord = false;
        }
    }

    file.close();

    cout << "Lines: " << lines << endl;
    cout << "Words: " << words << endl;
    cout << "Characters: " << chars << endl;

    return 0;
}
