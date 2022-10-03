//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    char myGrade = 'A';
    // print this out normally
    cout << "My grade in Calculus was an " << myGrade << ".\n";
    // print out as ascii value
    cout << "My grade as an ascii value is " << (int) myGrade << ".\n"; // type conversion to int
    char otherGrade = 66; // creating character with ascii value
    cout << "In another class I got a " << otherGrade << ".\n";
    /*
     * visit https://www.asciitable.com/
     * for more ascii values
     */
    char exclamation = 33;
    cout << "Thanks, Tim, that was helpful" << exclamation << endl;
}