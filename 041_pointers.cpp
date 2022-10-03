//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    /*
     * A pointer stores the memory address as its value
     */
    string name = "Timothy Unkert";
    string* myNamePointer = &name;

    cout << myNamePointer << endl; // outputs the memory address
    cout << *myNamePointer << endl; // outputs "Timothy Unkert" - this is referred to as DEREFERENCING
}