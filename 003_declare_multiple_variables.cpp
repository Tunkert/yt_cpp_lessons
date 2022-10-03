//
// Created by tunkert on 10/3/22.
//

#include <iostream>

using namespace std;

int main() {
    int myAge, myDadsAge, myMomsAge;
    myAge = 46;
    myDadsAge = 78;
    myMomsAge = 77;
    // when we get user input this will be helpful to declare multiple variables in one line
    cout << "My age is " << myAge << " and my dad is " << myDadsAge << " years old.\n";
    cout << "My mom is " << myDadsAge - myMomsAge << " year younger than my dad.\n";
    /*
     * Make variables readable and understandable
     * names may contain letters, digits, and underscores
     * names are case sensitive
     * reserved words (like int, char, double, main, etc) can't be used
     * don't shadow variables - have unique names
     */
}