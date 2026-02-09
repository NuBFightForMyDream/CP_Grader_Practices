# include <iostream>
# include <string>
using namespace std ; 

int main() {
    // define info
    int N ; cin >> N ;
    int info[N] ; // define array

    // add info to array
    for (int i = 0 ; i < N ; i++) {
        cin >> info[i] ;
    }

    // for loop , check peaks in array
    int count_peak = 0 ; 

    for (int j = 1 ; j < N - 1 ; j++) {
        if ( (info[j] > info[j-1]) && (info[j] > info[j+1]) ) {
            count_peak += 1 ; 
        }
    }

    cout << count_peak << endl ;
}