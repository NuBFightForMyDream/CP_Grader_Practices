# include <iostream>
# include <cmath> // import cmath library
using namespace std ;

int main() { // main fn
    double numerator , denominator ; // declare var.

    // create factorial fn
    int ten_factorial = 1 ; // 0! = 1  
    for (int i = 1 ; i <= 10 ; i++) {
        ten_factorial *= i ;
    }

    // define constant
    double pi_value = M_PI ; // M_PI represents for math.pi

    // define value (log(e) is natural log)
    numerator = pi_value - (ten_factorial / pow(8.0,8.0)) + pow(log(9.7) , (7.0/sqrt(71) - sin(40.0/180.0*pi_value)));
    denominator = pow(1.2 , pow(2.3 , 1.0/3.0) );

    // show result
    cout << numerator / denominator << endl ;

}