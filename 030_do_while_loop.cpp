//
// Created by tunkert on 10/3/22.
//

/*
 * The do while loop will run at least once even if the condition is not met.
 */

#include <iostream>

using namespace std;

int main() {
    int index = 100;
    do {
        cout << "The loop is running!" << endl;
    } while (index < 90);
}
