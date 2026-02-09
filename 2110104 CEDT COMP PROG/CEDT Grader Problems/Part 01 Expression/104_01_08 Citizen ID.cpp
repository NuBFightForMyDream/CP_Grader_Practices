# include <iostream>
# include <string> 
using namespace std ; 

int main() {
    // input str & define info
    string id ; 
    cin >> id ; 

    // using string cmd
    int n0 , n1 , n2 , n3 , n4 , n5 , n6 , n7 , n8 , n9 , n10 , n11 ;

    // change char (by indexing) to int by subtracting with '0'
    n0 = ( id[0] - '0') ; n1 = ( id[1] - '0') ; n2 = ( id[2] - '0') ; 
    n3 = ( id[3] - '0') ; n4 = ( id[4] - '0') ; n5 = ( id[5] - '0') ; 
    n6 = ( id[6] - '0') ; n7 = ( id[7] - '0') ; n8 = ( id[8] - '0') ; 
    n9 = ( id[9] - '0') ; n10 = ( id[10] - '0') ; n11 = ( id[11] - '0') ; 

    // calculate n12
    int n12 = (11 - (13*n0 + 12*n1 + 11*n2 + 10*n3 + 9*n4 + 8*n5 + 7*n6 + 6*n7 + 5*n8 + 4*n9 + 3*n10 + 2*n11) % 11 ) % 10 ;

    // using .substr cmd (start , count from start)
    string id_all = to_string(n0) + "-" + id.substr(1,4) + "-" + id.substr(5,5) + "-" + id.substr(10,2) + "-" + to_string(n12) ;
    
    // print result
    cout << id_all ; 
}  