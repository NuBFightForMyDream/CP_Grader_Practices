# include <iostream> 
# include <map> 
# include <string>
using namespace std ; 

int main() {
    // input info 
    int N ; cin >> N ;
    map <string , int> frequent_word ; // create vacant map 

    string word ; // word for input 
    
    // add new value 
    for (int i = 0 ; i < N ; i++) {
        cin >> word ; 

        // add to map (check if ever in map) 
        frequent_word[word]++ ; // add key:val (starting value = key:0 -> ++ (add value) -> key:1 ) 
    }
    // map sorted key alphabetically after using map[key]++

    // given first key , value (create initial iterator first)
    auto first_iterator = frequent_word.begin() ; // iterator 
    auto max_frequent_name = first_iterator->first ; // (Note : Iterator can point to element by ->)
    auto max_frequent_count = first_iterator->second ; 

    // for loop key:value then check if count is the most 
    for (auto & kv : frequent_word) { // can use auto & kv : map (range-based loop) (& for no copying element)

        if ( kv.second >= max_frequent_count) { // kv.second = word count
            // change word 
            max_frequent_name = kv.first ; 
            // change value 
            max_frequent_count = kv.second ; 
        }
        // no need to check latest element (cuz if same count , it will get last element from >= sign)
    }

    // print out most freq name & count 
    cout << max_frequent_name << " " << max_frequent_count << endl ; 
}