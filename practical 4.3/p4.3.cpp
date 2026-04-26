#include "header.h"

#include <iostream>
using namespace std;

int runProgram() {
    int n, m;
    cout << "Enter sizes: ";
    cin >> n >> m;

    int *a = new int[n];
    int *b = new int[m];

    cout << "Enter sorted array 1: ";
    for(int i=0;i<n;i++) cin >> a[i];

    cout << "Enter sorted array 2: ";
    for(int i=0;i<m;i++) cin >> b[i];

    int *c = new int[n+m];

    int i=0, j=0, k=0;

    
    while(i<n && j<m) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    
    while(i<n) c[k++] = a[i++];
    while(j<m) c[k++] = b[j++];

    
    cout << "Merged Array: ";
    for(int x=0;x<n+m;x++)
        cout << c[x] << " ";

    
    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}
