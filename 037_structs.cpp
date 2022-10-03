//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    struct {
        string myName = "Timothy Unkert";
        int myAge = 46;
        double myGPA = 4.0;
    } myself;

    cout << myself.myName << " is " << myself.myAge << " years old." << endl;
    cout << myself.myName << " had a " << myself.myGPA << " in grad school." << endl;
    // sort of like dictionaries in python
}