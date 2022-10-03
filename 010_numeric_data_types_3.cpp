//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    // floats
    float pi = 3.141592653589793238;
    double pi2 = 3.141592653589793238;
    long double pi3 = 3.141592653589793238;
    // print them out
    cout << "The value of pi as a float is " << pi << ".\n";
    cout << "The value of pi as a double is " << pi2 << ".\n";
    // notice they are the same on this compiler
    cout << "The value of pi as a long double is " << pi3 << ".\n";
    // ...
}