#include "header.h"
  #include <iostream>
using namespace std;

int runProgram()
{
    string number;
    int k;
    cout << "Please enter the number" << endl;
    cin >> number;
    cout << "Please enter number of times the input has to be concatenated" << endl;
    cin >> k;
    
    long long number_int=stoi(number);
    long long sum=0;
    while(number_int!=0)
    {
        sum+=number_int%10;
        number_int/=10;
    }

    string concat;
    for(int i=0;i<k;i++)
    {
        concat+=number;
    }
    cout << "Concatenated String" << endl << concat << endl;
    cout << "Value of Sum is " << sum*k << endl; 

    cout<<"Name: Manthan Vasoya"<<endl<<"ID: 25CE136";
    return 0;
}