# include <iostream> // input-output
using namespace std ; // namespace

int main() {
    float P ; 
    cin >> P ; 
    // declare value
    int k = 1 ;
    double t = 1 ;  // t can be double !!!

    // do for first loop
    t = t * (365 - k + 1) / 365 ;
        
    while ((1 - t) < P) {
        k += 1 ;
        t = t * (365 - k + 1) / 365 ;
    }

    // print k out
    cout << k ;

}
