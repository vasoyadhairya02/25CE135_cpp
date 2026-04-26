#include "header.h"
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int runProgram() {
    int n, x;
    set<int> s;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i=0;i<n;i++) {
        cin >> x;
        s.insert(x);   
    }

    
    cout << "\nUnique elements (set): ";
    for(auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    
    vector<int> v(s.begin(), s.end());

    cout << "\nVector: ";
    for(int i : v) cout << i << " ";

    return 0;
}
