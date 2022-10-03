//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    string names[5] = {"Tim", "Sarah", "Joe", "Aaron", "Matt"};
    // access the first string in the array
    cout << names[0] << endl;
    // access the last string in the array
    cout << names[4] << endl;

    // loop through the array using a for range loop
    for (string name: names) {
        cout << name << endl;
    }
    cout << "=== Loop break ===\n";

    // more precise for range notation - thanks CLion ...
    for (auto & name : names) {
        cout << name << endl;
    }

    cout << "=== Loop break ===\n";

    // regular old for loop
    for (int i = 0; i < 5; i++) {
        cout << names[i] << endl;
    }
}