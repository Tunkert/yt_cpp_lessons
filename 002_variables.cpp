/*
 * Author: Timothy Unkert
 * Purpose: Demonstrate creating and printing a variable to the console, talk about data types
 * Date: 10/3/22
 * Different data types discussed in this video
 * int, double, char, string, bool
 */

#include <iostream>

using namespace std;

int main() {
    int myAge = 46;
    string myName = "Timothy Unkert";
    double valueOfPi = 3.14;
    char myGrade = 'A'; // note the single quotes as versus the string
    bool isMale = true;
    // printing to the console.
    cout << "Hi, my name is " << myName << ", and I am " << myAge << " years old.\n";
    cout << "Coincidentally, the value of pi is " << valueOfPi << ".\n";
    cout << "In my Calculus courses I got an " << myGrade << ".\n";
    // conditional - jumping ahead ... with what they call a truthy
    if (isMale) {
        cout << "I am a male.\n";
    } else {
        cout << "I am not a male.\n";
    }
}