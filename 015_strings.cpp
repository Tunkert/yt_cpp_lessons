//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    string myName = "Timothy Unkert!";
    // print first character of string
    cout << myName[0] << endl;
    // print out the last character of the string
    cout << myName[myName.length() - 1] << endl;
    // loop through string and print out the characters
    // use range based loop
    for (char i : myName) {
        cout << i << endl;
    }
}