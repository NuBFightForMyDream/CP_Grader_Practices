#include <iostream>
#include <string>
using namespace std ; 

int main() {
    // declare & input var
    string check_str ; 
    cin >> check_str ; 

    // for loop -> count vowel
    int count_vowel = 0 ; 

    for (int i = 0 ; i < check_str.length() ; i += 1) {
        // check if vowel , count + 1
        if ( (check_str[i] == 'a') || (check_str[i] == 'e') || (check_str[i] == 'i') || (check_str[i] == 'o') || (check_str[i] == 'u') ) {
            // add count
            count_vowel += 1 ; 
        }

    }

    // after for loop , print out count_vowel
    cout << count_vowel << endl ;

    return 0 ; 
}