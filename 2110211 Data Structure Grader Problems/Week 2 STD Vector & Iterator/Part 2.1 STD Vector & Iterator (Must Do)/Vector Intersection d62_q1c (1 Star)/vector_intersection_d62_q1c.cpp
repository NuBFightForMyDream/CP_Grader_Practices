# include <iostream>
# include <vector> 
# include <algorithm> // find
using namespace std ;

int main() {
    // input vector
    int M , N ; cin >> M >> N ; 
    vector <int> vec_1 ;
    vector <int> vec_2 ;
    for (int i = 0 ; i < M ; i++) {
        int value ; cin >> value ; 
        vec_1.push_back(value) ; 
    }

    for (int j = 0 ; j < N ; j++) {
        int value ; cin >> value ; 
        vec_2.push_back(value) ; 
    }

    // sort then check 
    sort(vec_1.begin() , vec_1.end()) ; 
    sort(vec_2.begin() , vec_2.end()) ; 

    // check same value
    vector <int> intersected_value  ; 
    
    // use iterator to check value 
    int a = 0 , b = 0 ; 
    while ( (a < vec_1.size()) && (b < vec_2.size()) ) {
        // if value same
        if ( vec_1[a] == vec_2[b] ) {
            // update value & pos
            intersected_value.push_back(vec_1[a]) ;
            a++; b++ ; 
        }

        else if (vec_1[a] < vec_2[b]) {
            // update a 
            a++ ; 
        }

        else {
            b++ ; 
        }
    }

    // sort vector
    sort( intersected_value.begin() , intersected_value.end() );

    // output
    for (int j = 0 ; j < intersected_value.size() ; j++) {
        cout << intersected_value[j] << " " ; 
    }
    
}
