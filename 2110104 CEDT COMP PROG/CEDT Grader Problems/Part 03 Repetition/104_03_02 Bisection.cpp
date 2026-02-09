# include <iostream> // i/o
# include <cmath> // math
# include <algorithm>
using namespace std ; 

int main() {
    // declare & input var
    double L , U , x , a ; 
    cin >> a ; 
        // given L,U,x
    L = 0 ; U = a ; x = (L + U) / 2 ;

    // while loop -> DO IF NOT "NEAR ENOUGH"
    // key : we need to check reverse fn of y (ex y = x^2 -> check sqrt(x))
    while ( abs(a - pow(10,x)) > 1e-10 * max(a, pow(10,x)) ) {
        // if x^2 > a , change upper to {L,x]
        if (pow(10,x) > a) {
            U = x ;
        }
    
        // else , change lower to [x,U]
        else if (pow(10,x) < a) {
            L = x ; 
        }

        // by the way , change x every time
        x = (L + U) / 2.0 ;
    } // ending loop

    // print out result
    cout << x << endl ; // x is approximate of sqrt(a)
}
