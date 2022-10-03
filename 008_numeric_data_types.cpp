//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    // char data type
    char myAge; // -128 to 127
    // or unsigned char
    unsigned char yourAge; // 0 to 255
    cout << "What is your age? ";
    cin >> yourAge;
    cout << "Your age is " << yourAge << ".\n"; // notice what happens here.
    // int data type
    int myAge2;
    cout << "O.k., what is your age, really? ";
    cin >> myAge2;
    cout << "Your real age is not " << yourAge << ", it is " << myAge2 << "."; // notice this still isn't working
}