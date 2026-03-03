# include <iostream> 
using namespace std ; 

// main fn
int main() { 
    // declare & input var.
    int x ;
    int sum_square = 0 ;
    cin >> x ;

    // while loop
    int i = 1 ; 
    while (i <= x) {
        // add value
        sum_square += (i * i) ; // cpp cant use square fn
        // increment loop
        i += 1 ;
    }

    // print out x
    cout << sum_square << endl ; 
}