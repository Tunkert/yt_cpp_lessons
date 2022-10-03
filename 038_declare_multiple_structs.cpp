//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    struct {
        string name;
        int age;
        double GPA;
    } myself, you, billy;

    myself.name = "Timothy Unkert";
    myself.age = 46;
    myself.GPA = 4.0;

    you.name = "Sarah";
    you.age = 49;
    you.GPA = 3.5;

    cout << you.name << " had a " << you.GPA << " GPA in college.\n";
    // play with this stuff ...
}