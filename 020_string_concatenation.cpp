//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    string firstName = "Tim";
    string lastName = "Unkert";
    cout << "Your name is " << firstName + lastName << ".\n"; // notice something?
    cout << "My name is " << firstName + " " + lastName << ".\n"; // better
    string otherFirstName = "Timothy ";
    cout << "My name is " << otherFirstName + lastName << ".\n"; // other way
}