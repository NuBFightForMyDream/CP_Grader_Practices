# include <iostream>
# include <string>
using namespace std ; 

int main() {
    // declare & input var
    int N ; 
    string output = "" ;
    cin >> N ; 

    // for loop , check position
    for (int pos = 1 ; pos <= N ; pos += 1) {
        if (pos % 5 == 0) { 
            output += "X" ;
        }

        else {
            output += "*" ;
        }
    }

    // after loop , print output
    cout << output << endl ;
}