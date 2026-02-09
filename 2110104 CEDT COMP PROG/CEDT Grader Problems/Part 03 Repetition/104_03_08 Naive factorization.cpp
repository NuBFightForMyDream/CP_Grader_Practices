# include <iostream> // input
# include <cmath> // math
using namespace std ; // namespace

int main() {
    // define & input
    string result = "" ;
    // define number
    int number ; 
    cin >> number ; 

    // calculate factor of number
    int divider = 2 ; // start at 1
    while (number > 1) {
        if (number % divider == 0) { // factor starts at 2
            number = number / divider ;
            result += to_string(divider) + "*" ; // divide until number is 1
        }
        else {
            divider += 1 ; // add divider ; 2->3->4->...
        }
    } // ending loop

    // trim out last string
    cout << result.substr(0 , result.length() - 1 ) << endl ; 
}