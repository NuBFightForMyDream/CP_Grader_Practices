# include <iostream>
# include <string>
using namespace std ; 

// main fn
int main() {
    // declare & input var.
    int total = 1 ;
    int N ; 
    cin >> N ; 

    // while loop until 1!
    while (N >= 1) {
        // multiply N
        total *= N ; 
        // decrement N by 1 each loop
        N -= 1 ;
    }

    // after loop -> print out total
    cout << total << endl ;
}