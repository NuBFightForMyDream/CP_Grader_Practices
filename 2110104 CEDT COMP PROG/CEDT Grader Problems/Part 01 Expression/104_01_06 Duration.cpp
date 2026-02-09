# include <iostream>
using namespace std ; 

int main() {
    // declare var.
    int h1,m1,s1,h2,m2,s2 ; 

    // input info
    cin >> h1 >> m1 >> s1 ;
    cin >> h2 >> m2 >> s2 ;

    // define t for total second
    int t1 = 3600*h1 + 60*m1 + s1 ; 
    int t2 = 3600*h2 + 60*m2 + s2 ;
        // to solve this problem , add 1 days then find remainder (+ then % with 86400)
    int dt = (t2 - t1 + 86400) % 86400 ; 

    // calculate dh,dm,ds
    int dh,dm,ds ;

    dh = dt / (60*60); 
    dt -= dh * 60*60;

    dm = dt / 60; 
    dt -= dm*60;

    ds = dt ; 

    // print output
    cout << dh << ':' << dm << ':' << ds;

}