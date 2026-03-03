#include <iostream>
#include <string> 
using namespace std ; 

int main() { 
    // declare & input
    int loop ; 
    char alphabet ; 
    int count_vowel = 0 ; 

    cin >> loop ; // input loop

    // for loop
    for (int i = 0 ; i < loop ; i += 1) {
        // input each loop
        cin >> alphabet ; 

        // check if alphabet
        if ( (alphabet == 'A') || (alphabet == 'E') || (alphabet == 'I') || (alphabet == 'O') || (alphabet == 'U') ) {
            // add count_vowel by 1
            count_vowel += 1 ; 
        }
    }

    // after loop , print out count_vowel
    cout << count_vowel << endl ; 
}