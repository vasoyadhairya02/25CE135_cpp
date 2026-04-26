#include "header.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void addItem() {
    ofstream f("inv.txt", ios::app);
    string name;
    int qty;
    double price;

    cout << "Enter name qty price: ";
    cin >> name >> qty >> price;

    f << name << " " << qty << " " << price << endl;
    f.close();
}


void viewItems() {
    ifstream f("inv.txt");
    string name;
    int qty;
    double price;

    cout << "\nItems:\n";
    while(f >> name >> qty >> price) {
        cout << name << " " << qty << " " << price << endl;
    }
    f.close();
}


void searchItem() {
    ifstream f("inv.txt");
    string name, search;
    int qty;
    double price;
    bool found = false;

    cout << "Enter name to search: ";
    cin >> search;

    while(f >> name >> qty >> price) {
        if(name == search) {
            cout << name << " " << qty << " " << price << endl;
            found = true;
        }
    }

    if(!found) cout << "Not found\n";
    f.close();
}

int runProgram() {
    int ch;

    do {
        cout << "\n1.Add 2.View 3.Search 0.Exit: ";
        cin >> ch;

        if(ch==1) addItem();
        else if(ch==2) viewItems();
        else if(ch==3) searchItem();

    } while(ch!=0);

    return 0;
}
