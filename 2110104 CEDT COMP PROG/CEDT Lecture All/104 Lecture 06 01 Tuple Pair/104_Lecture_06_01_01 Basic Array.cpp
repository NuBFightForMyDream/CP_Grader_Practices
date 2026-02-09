# include <iostream> 
# include <vector> 
# include <string>
using namespace std ; 

// define older function (return bool) 
bool p1_older_than_p2 ( int dmy1[] , int dmy2[] ) { // no need to define size with >1 array in parameters 
    // check year (if equal then checlk month & date)
    if (dmy1[2] == dmy2[2]) {
        // check month 
        if (dmy1[1] == dmy2[1]) {
            return dmy1[0] < dmy2[0] ; 
        }
        return dmy1[1] < dmy2[1] ; // return month if p1 older than p2 (m1 < m2)
    }
    else {
        return dmy1[2] < dmy2[2] ; // result of p1 older than p2
    }
}

int main() {
    // define & input array
    int bd1[3] , bd2[3] ; // array with size 3
    cin >> bd1[0] >> bd1[1] >> bd1[2] ; 
    cin >> bd2[0] >> bd2[1] >> bd2[2] ; 
    
    // call function who is older
    cout << p1_older_than_p2(bd1 , bd2) << endl ; 
}