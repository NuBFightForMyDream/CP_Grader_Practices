# include <iostream> 
# include <string>
using namespace std;

// main fn
int main() {
    // declare & input var
    int num ;
    int count_even = 0 , count_odd = 0 ; // input in loop

    // for loop
    for (int i = 0 ; i < 3 ; i += 1 ) { // start loop i = 0 , with 3 rounds , add 1 for each loop
        // input each round
        cin >> num ; 

        // check even or odd
        if (num % 2 == 0) { // even number
            count_even += 1 ; 
        }

        else { // odd number
            count_odd += 1 ;
        }
    }

    // print out result
    cout << "even " << count_even << endl ;
    cout << "odd " << count_odd << endl ;

    return 0 ; 
}
