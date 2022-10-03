//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "What is your age? ";
    cin >> age;
    // create conditional to control flow of the program
    if (age >= 21) {
        cout << "You may enter the bar!" << endl;
    } else if (age >= 18) {
        cout << "You may not enter the bar, but you may go to war!" << endl;
    } else {
        cout << "You are a minor." << endl;
    }
}
