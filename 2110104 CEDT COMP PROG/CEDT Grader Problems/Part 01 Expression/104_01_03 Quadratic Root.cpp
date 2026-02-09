# include <iostream>
# include <cmath> // for mathematical calculation
using namespace std ; 

int main() {
    // define a,b,c & value
    double a,b,c ;
    double x1 , x2 ; 

    cin >> a >> b >> c ; // input info

    // calculate value
    x1 = ( -b - sqrt(b*b - 4*a*c) ) / (2*a) ; 
    x2 = ( -b + sqrt(b*b - 4*a*c) ) / (2*a) ; 

    // print result (3 decimal pts)
    cout << round(x1 * 1e3)/1e3 << " " << round(x2 * 1e3)/1e3 << endl ;
        // if it cant solve -> return nan (not a number) instead
}