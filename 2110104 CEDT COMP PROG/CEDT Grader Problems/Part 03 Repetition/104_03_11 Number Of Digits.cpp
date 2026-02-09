# include <iostream> // input-output
# include <cmath> // math
# include <string> // string
# include <algorithm> // algorithm -> using for max
using namespace std ; // namespace

int main() {
    // declare & input
    long long start_num , end_num ; 
    cin >> start_num >> end_num ; 

    // dumb sol : for loop until end_num
    /*
    long long total_digits = 0 ; 
    for (long long i = start_num ; i <= end_num ; i++) {
        total_digits += to_string(i).length() ;
    }
    cout << total_digits << endl ; 
    */

    // better solution , calculate count for each digit
        // we define bound START (compare max between start_num and 10**(digit-1)) // ends at 10..000..
        // then we define END (compare min between end_num and 10**digit - 1) // ends at 999..99..

    // loop from 1 to 18 (because long long can store to 1e17)
    long long total_digits = 0 ; 
    for (int digit = 0 ; digit < 18 ; digit += 1) {
        // find count for each digit !! beware that pow returns double
        long long lower = max( start_num , (long long)pow(10LL , digit - 1)) ;
        long long upper = min( end_num , (long long)pow(10LL , digit) - 1 ) ; 
        long long count = upper - lower + 1 ; // store as long long !!!

        // add digits to total_digits
        if (count > 0) {
            total_digits += count * digit;
        }
    } // end for loop

    cout << total_digits ; // show out results
}

