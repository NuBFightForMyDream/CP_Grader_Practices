# include <iostream> 
# include <set> 
# include <string> 
# include <vector>
# include <algorithm> 
using namespace std ; 

// define function
set<char> count_unique_digits_set(string numbers) { 
    set<char> found_num ; 
    for (char c : numbers) {
        // if found , insert 
        if ('0' <= c && c <= 'd') { 
            found_num.insert(c) ; 
        }
    }
    return found_num ; 
}       

vector<char> count_unique_digits_vector(string numbers) { 
    vector<char> found_num ; 
    for (char c : numbers) { 
        if ('0' <= c && c <= '9') { 
            if ( find(numbers.begin() , numbers.end() , c ) == numbers.end() ) { // never found , insert 
                found_num.push_back(c) ; 
            }
        }
    }
    return found_num ; 

}