# include <iostream> 
# include <vector> 
# include <algorithm> 
# include <string>
using namespace std ;

int main() { 
    vector<int> collatz ; 
    int num ; cin >> num ; 

    while (num != 1) {
        // add number
        collatz.push_back(num) ; 

        // check condition
        if (num % 2 == 0) num = num / 2 ; 
        else num = 3 * num + 1 ;
    }
    // add last element (1) to vector
    collatz.push_back(num) ; // num = 1

    // slice for 15 lastest element
    if (collatz.size() > 15) { 
        // slice with subvector -> always end at end-1
        vector<int> sliced_collatz(collatz.end() - 15 - 1 , collatz.end() ) ; // get element before end = end-1 = last element

        string out_collatz = "" ; 
        for (auto num : sliced_collatz) out_collatz += to_string(num) + "->" ;
        cout << out_collatz.substr(0 , out_collatz.length()-2) ;
        cout << endl ;
    
    }
    else { 
        string out_collatz = "" ; 
        for (auto num : collatz) out_collatz += to_string(num) + "->" ;
        cout << out_collatz.substr(0 , out_collatz.length()-2) ;
        cout << endl ;
    }
    

}
