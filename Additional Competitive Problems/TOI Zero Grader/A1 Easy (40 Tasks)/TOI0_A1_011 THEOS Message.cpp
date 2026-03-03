# include <iostream>
# include <string>
using namespace std ;

int main () {
    // declare var.
    string theos_msg = "" ;
    char now_str = ' ' ;  
    int count_str = 0 ; 

    string input_str ; 
    cin >> input_str ; 

    // for loop check each character
    for (int pos = 0 ; pos < input_str.length() ; pos += 1) {
        // check each char

        if (pos == 0) { // first char -> count
            now_str = input_str[pos];
            count_str += 1 ; 
        }

        else { // another str -> check if same as first char
            if (now_str == input_str[pos]) {
                count_str += 1 ;
            }

            else {
                // add last character & count to theos_str
                theos_msg += to_string(count_str) + now_str ; 
                // change now_str & reset count_str to 1 
                now_str = input_str[pos];
                count_str = 1 ;
            }
        }
    }

    // after for loop , add last value then print theos_msg
    theos_msg += to_string(count_str) + now_str ; 
    cout << theos_msg ; 

}