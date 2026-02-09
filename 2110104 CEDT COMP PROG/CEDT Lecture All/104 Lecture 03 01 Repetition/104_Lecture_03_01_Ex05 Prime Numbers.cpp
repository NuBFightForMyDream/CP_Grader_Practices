// Prime Number examples
# include <iostream> 
# include <string> 
# include <cmath> // math
using namespace std ; 

int main() {
    // input number
    int number ; bool divided = false ; 
    cout << "Enter a number : " ; cin >> number ; // enter number
    int divisor = 2 ; // divisor start from 2 

    while (divisor < sqrt(number)) { // still run until number
        // check if number can be divided by divisor , return "Not prime" to user
        if (number % divisor == 0) {
            // change status of divided
            divided = true ; 
            // show result of not prime number
            cout << number << " is not prime number naja" << endl ;
            break ; // no need to loop again 
        }
        divisor++ ; // add divisor
    }

    // out of loop , if not divided , print status of prime number
    if ( (divided == false) && (divisor = number) ) {
        cout << number << " is prime number" << endl ; 
    }

    // Well , in math , find until only sqrt() is enough , no need to find until number
}