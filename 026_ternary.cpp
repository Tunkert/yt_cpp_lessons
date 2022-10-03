//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    string barEntrance;
    int age;
    cout << "How old are you, bro? ";
    cin >> age;
    barEntrance = (age >= 21) ? "You may enter the bar." : "You may not enter the bar.";
    cout << barEntrance << endl;
}