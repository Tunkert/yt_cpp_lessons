//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    string myName = "Timothy Unkert";
    cout << myName.size() << endl;
    // loop through string
    for (int i = 0; i < myName.size(); i++) {
        cout << myName[i] << endl;
    } // note we could use range based loop
    // but this still works
}