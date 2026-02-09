# include <iostream> // i/o
# include <algorithm> // for swap
using namespace std ; 

int main() { // returning status (int) (0/1)
    // define & input
    int a,b,c,d,e ;
    cin >> a >> b >> c >> d >> e ;

    // do flowchart
    if (a > b) {
        swap(a,b) ;
    }
    if (c > d) {
        swap(c,d) ;
    }
    if (a > c) {
        swap(b,d);
        c = a ; 
    }

    a = e ; 

    if (a > b) {
        swap(a,b) ;
    }
    if (c > a) {
        swap(b,d) ;
        a = c ;
    }
    if (a > d) {
        cout << d; 
    }
    else {
        cout << a;
    }
}