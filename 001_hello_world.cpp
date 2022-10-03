//
// Created by tunkert on 10/3/22.
//

#include <iostream> // header file library, that works with input output libraries

int main() {
    std::cout << "Hello, my name is Tim." << std::endl;
    std::cout << "This is one line.\nThis is the next line.\n";
    /*
     * std::cout is using console out from the std namespace
     * std::endl is using end line from the std namespace
     * note you can get rid of the prefix std:: if you include the line below your header file:
     * using namespace std;
     * note that in building programs you might just want to include what you want to have, i.e.
     * using std::cout;
     * using std::endl;
     * I have observed that competitive programmers will bring in the entire namespace to save time coding
     */
    return 0; // this function returns the integer 0, note this is optional in the main function.
}