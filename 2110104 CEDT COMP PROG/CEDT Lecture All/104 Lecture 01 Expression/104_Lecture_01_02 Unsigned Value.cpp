# include <iostream> // input-output
using namespace std ; // namespace

int main() {
    // Ex 1 : define unsigned var.
    int y ; 
    cout << y ; // return random value of y (but still type int)


    // Ex 2 : returning outbound value (over integer)
    double a = 30.99;
    int b = 30.99; // will store as 30 (decimal pts are neglected)
    cout << a << " , " << b << endl; // 30.99 , 30

    a = 12345678900; // double can store around 16 digits
    b = 12345678900; // but int cant , so it does some operator to trying to store number in int form
    cout << a << " , " << b << endl; // overflowing (taught in Data Representation)

}
