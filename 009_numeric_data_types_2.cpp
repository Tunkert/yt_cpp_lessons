//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    // regular ints
    cout << "The max value of an integer (32 bit) is " << INT32_MAX << ".\n";
    cout << "The min value of a 32 bit integer is " << INT32_MIN << ".\n";
    // unsigned ints
    cout << "The max value of an unsigned integer is " << UINT32_MAX << ".\n";
    // unsigned ints start at 0 so we won't print that ...
    // long ints
    cout << "The max value of a long integer (64 bit) is " << INT64_MAX << ".\n";
    cout << "The min value of a long integer (64 bit) is " << INT64_MIN << ".\n";
    // long unsigned ints
    cout << "The max value of a long unsigned integer is " << UINT64_MAX << ".\n";
    // these value could depend on your compiler, bro ...
}