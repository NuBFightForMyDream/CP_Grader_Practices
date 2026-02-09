# include <iostream>
# include <tuple>
using namespace std ; 

string to_str( tuple<int,int> & e) { // e represent for each tuple
    return "[" + to_string(get<0>(e)) + ", " + to_string(get<1>(e)) + "]" ;
}

int main() {
    const int N = 4 ; // N = constant (cant change value)

    // create array of tuples
    tuple<int,int> array_of_tuple[N] = { {2,3} , {5,1} , {4,3} , {5,2} } ; 
    // change each element (tuple) into string by function to_str
    for (int i = 0 ; i < N ; i++) {
        cout << to_str( array_of_tuple[i] ) << endl ; // print each element 
    }

    // find max value
    tuple<int , int> max_tuple = array_of_tuple[0] ; // first value
    for (int i = 1 ; i < N ; i++) { // start from index 1 
        if (array_of_tuple[i] > max_tuple) {
            max_tuple = array_of_tuple[i] ; 
        }
    }

    // print result
    cout << "Max Tuple : " << to_str( max_tuple ) << endl ; 
}