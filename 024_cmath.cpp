//
// Created by tunkert on 10/3/22.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double base = 3.0;
    double exponent = 2.0;
    // find max values
    cout << max(16, 25) << endl;  // will print 25
    cout << min(12, 66) << endl;  // will print 12 - don't need cmath for this
    // using cmath
    cout << sqrt(25) << endl; // takes in double, returns double 5
    cout << sqrt(9.9) << endl;
    // absolute value
    cout << abs(-10) << endl;
    cout << abs(10) << endl;
    // trig functions - take in radians
    cout << cos(M_PI / 4) << endl;
    cout << M_PI << endl;
    cout << sin(M_PI / 2) << endl;
    // absolute value of floats
    cout << fabs(-3.14) << endl;
    // power
    cout << pow(base, exponent) << endl;
    // hypotenuse
    cout << hypot(3, 4) << endl; // will print 5
    // fma
    cout << fma(2, 3, 5) << endl; // 11
    // floor
    cout << floor(4.99) << endl;
    // ceil
    cout << ceil(3.01) << endl;
    // e to the x power
    cout << exp(2) << endl; // 7.38906 ...
    // floating max and min
    cout << fmax(3.56, 3.61) << endl;
    cout << fmin(3.56, 3.61) << endl;
    // cube root
    cout << cbrt(27) << endl; // 3
    // floating point remainder
    cout << fmod(3.14, 1.23) << endl;
}