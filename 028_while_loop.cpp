//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    int keepLooping = 1;
    while (keepLooping) {
        cout << "Do you want to keep looping? (1 for yes, 0 for no). ";
        cin >> keepLooping;
    }
}
