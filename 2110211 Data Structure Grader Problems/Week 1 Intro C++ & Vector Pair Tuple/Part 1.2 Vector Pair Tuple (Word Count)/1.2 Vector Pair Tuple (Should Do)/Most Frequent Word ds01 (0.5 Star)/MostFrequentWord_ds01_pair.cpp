// using vector of pair is too slow : 70/100

# include <iostream> 
# include <algorithm> 
# include <vector>
# include <utility>

using namespace std ; 

// define find_element_in_vector_of_pair
int find_pos_in_vector_of_pair( vector< pair<int,string> > & freq , string find_word) {
    for (int pos = 0 ; pos < freq.size() ; pos++) { 
        auto each_pair = freq[pos] ; 
        if (each_pair.second == find_word) return pos ;  
    }
    return -1 ; // if not found , return -1 as result
}

int main() {
    // define vector containing frequency of words
    vector< pair<int , string> > frequency_of_word ; 

    // Step 1 : loop then check element
    int N ; cin >> N ; 
    for (int i = 0 ; i < N ; i++) { 
        string word ; cin >> word ;
        // Step 2 : check if word exist in vector of pair
            // define pos_found for easier 
        int pos_found = find_pos_in_vector_of_pair(frequency_of_word , word) ;
            // check condition 
        if (pos_found != -1) { // word exist , add count 1
            frequency_of_word[pos_found].first-- ; // pair.first -> frequency will be negative number for sorting
        }
        else { 
            frequency_of_word.push_back( make_pair(-1 , word) ) ; 
        }
    }

    // Step 3 : sort vector of pair (using algorithm library)
    sort( frequency_of_word.begin() , frequency_of_word.end() ) ; // freq = negative number

    // Step 4 : check for last element with max frequency 
    auto max_frequent_positive = - frequency_of_word[0].first ; 
    auto max_word = frequency_of_word[0].second ; 

    for (int pos = 0 ; pos < frequency_of_word.size() ; pos++) {
        // update element
        if (- frequency_of_word[pos].first >= max_frequent_positive) { 
            max_frequent_positive = - frequency_of_word[pos].first ; 
            max_word = frequency_of_word[pos].second ; 
        }
    }

    // Step 5 : show output
    cout << max_word << " " << max_frequent_positive << endl ; 
}