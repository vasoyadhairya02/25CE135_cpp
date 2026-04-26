#include "header.h"
#include <iostream>
#include <string>
using namespace std;

int runProgram() {
    string para;
    cout << "Enter paragraph:\n";
    getline(cin, para);

    string words[100];
    int count[100] = {0}, n = 0;

    string temp = "";

    
    for(int i=0;i<=para.length();i++) {
        if(para[i]==' ' || para[i]=='\0') {
            if(temp != "") {
                
                for(int j=0;j<temp.length();j++)
                    temp[j] = tolower(temp[j]);

                words[n++] = temp;
                temp = "";
            }
        } else {
            temp += para[i];
        }
    }

    
    for(int i=0;i<n;i++) {
        if(count[i] == -1) continue;

        count[i] = 1;
        for(int j=i+1;j<n;j++) {
            if(words[i] == words[j]) {
                count[i]++;
                count[j] = -1;
            }
        }
    }

    
    cout << "\nWord Frequencies:\n";
    for(int i=0;i<n;i++) {
        if(count[i] != -1)
            cout << words[i] << " = " << count[i] << endl;
    }

    return 0;
}
