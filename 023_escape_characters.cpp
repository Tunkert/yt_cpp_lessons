//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    string newLines = "\nThis line has a newline before and after it.\n";
    string tabbed = "\tThis line is tabbed over.";
    string quoted = "This string contains a \"double quote\".";
    string slashy = "This line contains a forward \\.";
    cout << newLines;
    cout << tabbed << endl;
    cout << quoted << endl;
    cout << slashy << endl;
}