//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    // loop will print 1 through 9 WITHOUT 7
    for (int i = 0; i < 10; i++) {
        if (i == 7) {
            continue;
        }
        cout << i << endl;
    }
    cout << "=== Next Loop ===\n";
    // this loop will print out 0 through 4
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        cout << i << endl;
    }
}