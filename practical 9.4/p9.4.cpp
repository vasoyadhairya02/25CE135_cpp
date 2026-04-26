#include "header.h"
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int runProgram() {
    map<string, vector<string>> dir;
    int ch;
    string folder, file;

    do {
        cout << "\n1.Add Folder\n2.Add File\n3.Display\n4.Exit\nChoice: ";
        cin >> ch;

        switch(ch) {
        case 1:
            cout << "Folder name: ";
            cin >> folder;
            dir[folder];   
            break;

        case 2:
            cout << "Folder: ";
            cin >> folder;
            cout << "File: ";
            cin >> file;
            dir[folder].push_back(file); 
            break;

        case 3:
            cout << "\nDirectory:\n";
            for(auto it : dir) {
                cout << it.first << " : ";
                for(auto f : it.second)
                    cout << f << " ";
                cout << endl;
            }
            break;
        }

    } while(ch != 4);

    return 0;
}
