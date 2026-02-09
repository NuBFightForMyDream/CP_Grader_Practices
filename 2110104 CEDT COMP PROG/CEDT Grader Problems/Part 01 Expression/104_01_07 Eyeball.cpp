# include <iostream> // input/output
# include <cmath> // math
using namespace std ; // namespace as std

int main() {
    // declare & input
    int xm , ym , xe , ye , re , rp ; 
    double a , b , c , A , B , C ; 
    double xp , yp ;

    cin >> xe >> ye >> re >> rp >> xm >> ym ;

    // define value for known var.
    A = xm - xe ; 
    B = ym - ye ; 
    C = pow( pow(A , 2) + pow(B, 2) , 0.5 ) ;
    c = re - rp ;

    // from similar triangle theorm , a/A = b/B = c/C
    // so , b = B/C * c and a = A/C * c
    b = B/C * c;
    a = A/C * c;

    // find xp , yp -> from a = xp - xe , b = yp - ye
        // so , xp = a + xe , yp = b + ye
    xp = a + xe ; 
    yp = b + ye ; 

    // show output (round to integer)
    cout << round(xp) << " " << round(yp) << endl;
}

