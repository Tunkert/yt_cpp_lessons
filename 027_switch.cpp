//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    int month;
    cout << "What month is it? (enter numerical value) ";
    cin >> month;
    switch (month) {
        case 1:
            cout << "That's right it is January." << endl;
            break;
        case 2:
            cout << "That's right it is February." << endl;
            break;
        case 3:
            cout << "Yup, it's March." << endl;
            break;
        default:
            cout << "It's some other month - I got lazy." << endl;
    }
}
