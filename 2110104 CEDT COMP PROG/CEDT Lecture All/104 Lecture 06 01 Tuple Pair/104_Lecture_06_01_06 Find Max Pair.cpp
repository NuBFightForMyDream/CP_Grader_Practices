# include <iostream>
# include <utility> // pair
using namespace std ; 

string to_str( pair<int , int> & e) { // e represent for each tuple
    return "[" + to_string(e.first) + ", " + to_string(e.second) + "]" ;
}

int main() {
    const int N = 4 ; // N = constant (cant change value)

    // create array of tuples
    pair<int,int> array_of_pair[N] = { {2,3} , {5,1} , {4,3} , {5,2} } ; 
    // change each element (tuple) into string by function to_str
    for (int i = 0 ; i < N ; i++) {
        cout << to_str( array_of_pair[i] ) << endl ; // print each element 
    }

    // find max value
    pair<int , int> max_pair = array_of_pair[0] ; // first value
    for (int i = 1 ; i < N ; i++) { // start from index 1 
        if (array_of_pair[i] > max_pair) {
            max_pair = array_of_pair[i] ; 
        }
    }

    // print result
    cout << "Max pair : " << to_str( max_pair ) << endl ; 
}