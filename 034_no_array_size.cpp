//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    string names[] = {"Tim", "Joe", "Sean"};
    cout << names[1] << endl; // Joe
//    names[4] = "Sarah"; // warning - compiles but you get a Segmentation fault (core dumped)
    // better choice
    string otherNames[10] = {"Tim"};
    otherNames[1] = "Sarah";
    otherNames[2] = "Joe";
    otherNames[3] = "Chet";
    // now loop through otherNames array
    for (int i = 0; i < 4; i++) {
        cout << otherNames[i] << endl;
    }
}