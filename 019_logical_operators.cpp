//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    cout << (5 > 2 && 5 < 2) << endl; // 0, obviously false
    cout << (5 > 2 || 5 < 2) << endl; // 1, because it can be either
    cout << !(5 > 2 && 5 < 2) << endl; // 1, because it's not false ...
}