# include <iostream> // input/output
# include <cmath> // math
using namespace std; // namespace = std 

int main() {
    // declare var & input var
    double y , x ;
    cin >> x ; //  x confirmed < 10

    // calculate value
    double numerator , denomenator ; // declare first

    numerator = pow( x , pow(log(pow(x+1 , 2)) , 0.5) ) ;
    denomenator = 10.0 - x ;

    cout << numerator / denomenator << endl ;
}