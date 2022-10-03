//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    string names[5] = {"Tim", "Sarah", "Joe"};
    cout << sizeof(names) << endl; // size in bytes
    int namesLength = sizeof(names) / sizeof(string);
    cout << namesLength << endl;
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sizeof(numbers) << endl; // notice that this size is smaller because it's a different data type
    double myDoubles[10] = {1.2, 3.14, 5.6, 7.8};
    cout << sizeof(myDoubles) << endl;
    // some other things to think about
    cout << 160 / 5 << endl;
    cout << 40 / 10 << endl;
    cout << 80 / 10 << endl;
}