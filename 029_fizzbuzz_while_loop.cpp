//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    int index = 1;
    while (index < 101) {
        if (index % 3 == 0 && index % 5 == 0) {
            cout << "Fizzbuzz" << endl;
        } else if (index % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (index % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << index << endl;
        }
        index++;
    }
}