# include <iostream>
# include <vector> 
# include <set>
# include <utility> // pair
# include <algorithm>
using namespace std ; 

// define equals function
bool equals(set<int> s1 , set<int> s2) { 
    int n = s1.size() ; 
    if (n != s2.size()) return false ; 
    // define iterator
    auto i1 = s1.begin() ; 
    auto i2 = s2.begin() ; 

    // loop check
    while (n--) { 
        if (*(i1++) != *(i2++)) return false ; // compare data from iterator
    }
    return true ; 

}

int main() { 
    // can compare data only with == < > 
    set<int> s1 = {3,1,2} ; 
    set<int> s2 = {1,3,2} ; 
    cout << (s1 == s2) << endl ; // 1 = true
    cout << equals(s1 , s2) << endl ; // 1 = true

    // insert data into set
    s1.insert(5) ; s2.insert(67) ; 
    cout << (s1 > s2) << endl ; // 0 = false

    // vector compare each pair (so , it'll return false)

}