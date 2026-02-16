// Example of using sort 
// Problems : rank frequency of alphabet then sort an print out most frequency 
# include <iostream> 
# include <vector> 
# include <algorithm> 
# include <utility> // pair 
using namespace std ; 

int main() { 
    // define 2 vectors : chars and counts
    vector<char> alphabets ; 
    vector<int> frequency ; 

    // Step 1 : define vectors for storing value
    string line ; 
    getline(cin , line) ; // get all strings in line 

    // Step 2 : loop then add value to vector
    for (char c : line) { 
        // loop each character in line then check count 
        if ('A' < c && c <= 'Z') { 
            // find position with iterator
            auto itr = find( alphabets.begin() , alphabets.end() , c ) ; 
            if ( itr == alphabets.end() ) { // not ever in vector , add new element 
                alphabets.push_back(c) ; 
                frequency.push_back(1) ; 
            }
            else { // add count to vector 
                int pos = itr - alphabets.begin() ; 
                ++frequency[ pos ] ; 
            }
        }
    }

    // Step 3 : create vector of pair<int , char>
    vector< pair<int , char> > most_frequent ;
    for ( int i = alphabets.size() - 1 ; i >= 0 ; --i ) { // reverse 
        most_frequent.push_back( make_pair(-frequency[i] , alphabets[i]) ) ; 
    } 

    // Step 4 : sort vector
    sort( most_frequent.begin() , most_frequent.end() ) ; 

    // Step 5 : print output
    for (auto eachPair : most_frequent) { 
        cout << eachPair.second << ":" << -eachPair.first << endl ; 
    }

    // Input : NEVER GONNA GIVE YOU UP
}