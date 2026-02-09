# include <iostream> // i/o
# include <cmath> // math
using namespace std ; 

int main() {
    // declare & input
    int d,m,y ; 
    cin >> d >> m >> y ; 

    // do flowchart
    y -= 543 ; 
    int n = 31 ; // 31 days for general month (ends with 'kom')

    if (m == 4 || m == 6 || m == 9 || m == 11) {
        n = 30 ; // 30 days for months end with 'yon'
    }

    else {
        if (m == 2) {
            n = 28 ; 
            // check leap year
            if (y % 400 == 0) {
                n = 29 ;
            }
            if (y % 4 == 0 && y % 100 != 0) {
                n = 29 ; 
            }
        }
    }

    // check next 15 days
    d += 15 ; 
    if (d > n) {
        d -= n ; m += 1; // add month
    }
    if (m > 12) { // check if over year
        m -= 12 ; y += 1 ; 
    }
    y += 543 ; // change back to buddha year

    cout << to_string(d) + "/" + to_string(m) + "/" + to_string(y) << endl ;

}