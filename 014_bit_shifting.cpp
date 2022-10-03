//
// Created by tunkert on 10/3/22.
//

#include <iostream>
#include <bitset>

using namespace std;

int main() {
    char myGrade = 65;
    char lowerGrade = 66;
    bitset<8> x(myGrade);
    cout << "My grade got lowered to a " << (char) (myGrade >> 1) << ".\n";
//    see it a lot of times the above way
    cout << x << endl;
    bitset<8> y(myGrade >> 1);
    cout << y << endl;
    bitset<8> z(lowerGrade);
    cout << z << endl;
    // really lower grade
    cout << "My grade got lowered to a " << char(myGrade + 1) << "." << endl; // we can do it this way also
}