# include <iostream> 
# include <vector> 
# include <algorithm>
using namespace std ; 

int main() { 
    // Step 1 : find only 1 element in vector
    vector<int> v = {3,4,5,1,6,1,1,1,67,3,1,9,1} ; 
    auto itr = find( v.begin() , v.end() , 67 ) ; 
    if ( itr != v.end() ) {
        cout << "Found at index " << (itr - v.begin()) << endl ; // 8
    }
    else { 
        cout << "Not found" ; 
    }

    cout << "---------------------------------------" << endl ;

    // Step 2 : find "every" index found in vector
    auto b = v.begin() , e = v.end() ; 
    bool found = false ; 
    auto it = b-1 ; // -1 to move before using find

    while ( ( it = find(++it , e , 1) ) != e ) {
        cout << "Found " << *it << " at index " << (it - b) << endl ; 
        found = true ; 
    }

    if (!found) cout << "Not found" ; 
}