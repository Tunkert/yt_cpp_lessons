//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "This calculator adds, subtracts, multiplies, divides and finds the remainder of division " <<
    "of the two numbers you enter.\n";
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << a << " + " << b << " = " << a + b << ".\n";
    cout << a << " - " << b << " = " << a - b << ".\n";
    cout << a << " * " << b << " = " << a * b << ".\n";
    cout << a << " / " << b << " = " << a / b << ".\n";
    cout << a << " % " << b << " = " << a % b << ".\n";
}