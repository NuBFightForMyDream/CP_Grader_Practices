# include <iostream> 
# include <string> 
using namespace std ; 

int main() {
    // Range-based for loop
    string kumpood = "Hello world !!!" ; 
    for (int i = 0 ; i < kumpood.length() ; i++) {
        cout << kumpood[i] << " " ;
        cout << endl ;  
    }

    // use auto for each string/iterator loop
    for (auto ch : kumpood) {
        // ch is now char for looping in string 
        cout << ch << "-" ;
    }
    cout << endl ; 

    // another example , find repeated character in string
    string s ; 
    cout << "Enter String : " << endl ; cin >> s ; 
    bool unique = true ; // not repeated

    for (int p1 = 0 ; p1 < s.length() ; p1++) { // c1 = char
        for (int p2 = p1+1 ; p2 < s.length() ; p2++) { // start at p1 (now) + 1
            if (s[p1] == s[p2]) {
                unique = false ; // change value to false (repeated)
                break ; 
            }
        }
    }
    // ending loop , check if repeated
    if (unique == true) {
        cout << s << " having unique character" << endl ; 
    }
    else {
        cout << s << " having repeated characters" << endl ; 
    }

    // Note : continue; function is like 'pass' in python
}