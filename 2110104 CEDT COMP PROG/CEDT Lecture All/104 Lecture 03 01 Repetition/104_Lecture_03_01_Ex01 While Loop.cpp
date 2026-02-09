# include <iostream> 
# include <string> 
using namespace std ; // namespace 

int main() { // main function
    // Example 1 : Basic While Loop 
    int i = 1; 
    while (i < 10) { // check -> do -> add
        cout << i << endl ; 
        i++ ; 
    }

    // Example 2 : add i before print
    int j = 0 ; 
    while (++j < 3) { // add -> check -> do
        cout << j << endl ; // always add i 
    } // result 1 2

    int k = 0 ; 
    while (k < 3) {
        cout << ++k << endl ;
    } // result : 1 2 3

    
}