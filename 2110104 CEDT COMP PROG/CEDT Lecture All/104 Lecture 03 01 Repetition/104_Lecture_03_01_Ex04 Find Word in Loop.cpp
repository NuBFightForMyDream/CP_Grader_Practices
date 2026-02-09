# include <iostream>
# include <string> 
using namespace std ; 

int main() {
    cout << "------- Example 2 -------" << endl ; 

    string hay , needle ;
    int b;
    cout << "Enter a string: "; getline(cin,hay);
    cout << "Enter check string : "; getline(cin,needle);
    cout << "Enter starting position: "; cin >> b;
    bool found = false ; // check if found word
    int pos = -1 ; 

    // Outer loop , check if found word (b)
    while (b <= hay.length() - needle.length()) { // only check valid positions
        int i = 0 ;
        bool match = true ;

        // Inner loop , check if all is same character (i)
        while (i < needle.length() && (b + i) < hay.length()) {
            if (needle[i] != hay[b+i]) {
                match = false ;
                break ;
            }
            i++ ;
        }
        if (match && i == needle.length()) {
            found = true ;
            pos = b ;
            break ;
        }
        b++ ;
    }

    if (found) {
        cout << "Found " << needle << " at index " << pos << endl ;
    } else {
        cout << "Can't find " << needle << " in \"" << hay << "\"" << endl ;
    }
}

// Summary , use .find(whatToFind , posToFind) is EASIER !!!