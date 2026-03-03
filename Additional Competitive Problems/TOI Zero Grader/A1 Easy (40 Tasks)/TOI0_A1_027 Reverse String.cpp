#include <iostream>
#include <string> 
#include <cctype> // for lowercase letters
using namespace std;

// main fn
int main() {
    // declare var & input str
    string input_str ; 
    cin >> input_str ; 

    // for loop -> add str for output
    string output_str = "" ; 

    for (int i = 4 ; i > -1 ; i -= 1) {
        // add each char
        output_str += tolower( input_str[i] ) ; // dont add "" while having "" already (char will converted to str)
    }

    cout << output_str ; 

    return 0 ; 
}