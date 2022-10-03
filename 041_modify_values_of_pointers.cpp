//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    string name = "Timothy Unkert";
    string* myNamePointer = &name;
    cout << myNamePointer << endl;
    cout << *myNamePointer << endl; // Timothy Unkert
    *myNamePointer = "Sarah";
    cout << myNamePointer << endl; // note same memory address
    cout << *myNamePointer << endl; // Sarah
}