//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    string namesLocations[2][5] = {
            {"Tim", "Sarah", "Joe"},
            {"Vail", "Vail", "Coventry"}
    };

    cout << namesLocations[0][0] << " lives in " << namesLocations[1][0] << ", Colorado." << endl;

    // loop through the arrays
    for (int i = 0; i < 3; i++) {
        cout << namesLocations[0][i] << " lives in " << namesLocations[1][i] << "." << endl;
    }
}