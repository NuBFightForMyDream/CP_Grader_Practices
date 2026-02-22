# include <iostream>
# include <vector> 
# include <set>
# include <utility> // pair
# include <algorithm>
using namespace std ; 

int get_min_val( set<int> s ) { 
    return *(s.begin()) ; 
}

int get_max_val( set<int> s ) {
    return *(--s.end()) ; // backward 1 itr before end then show value 
}

int main() { 
    // define set
    set<int> s = {3,2,5,11,7,17,13} ; 
    auto itr = s.begin() ; // pointed at 2 (minimum value -> sort set automatically)
    while (itr != s.end()) {
        cout << *itr << " " ; 
        itr++ ; // iterator cant skip
    }

    // check if set sorted
    for (auto num : s) cout << num << " " ; // set sorted 
    cout << endl ; 

    // set of pair 
    set< pair<int , char> > my_set = { {3,'C'} , {2,'D'} , {3 , 'F'} } ;
    for (auto each_pair : my_set) { // each_pair = pair<int , char>
        cout << each_pair.first << " " << each_pair.second << endl ;
    } 

    // reverse order of data
    set<int> numbers = {3,8,9,2,67,-19} ; 
    for (auto itr = numbers.end() ; itr != numbers.begin() ;) {
        cout << *(--itr) << " " ; // -- for decrease value then show 
                                  //  (otherwise itr-- will shown 1 as first which is wrong)
    }

    // get min , get max function
    cout << endl ; 
    cout << get_min_val( numbers ) << endl ; // -19
    cout << get_max_val( numbers ) << endl ; // 67
}