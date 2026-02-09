# include <iostream> 
# include <string>
using namespace std ; 

int main() {
    // Caution 1 : unsigned int type : value start from 0 

    /* ----> Infinite Loop <-----

    unsigned int ui = 5 ; 
    while (ui >= 0) {
        cout << ui << endl ; 
        // decrease ui by 1
        ui-- ; 
    }
    cout << ui << endl ; // latest ui will loop to be most ui
    
    */

    // Example 2 : calculate summation
    int summation = 0 ; int i = 1 ;
    int n ; cin >> n ; // declare and input n 
    while (i <= n) {
        summation += i ; 
        i++ ; 
    }
    cout << "summation is " << summation << endl ; 

    // Example 3 : print each string 
    string kumpood = "SawaddekrubAjarnPakcom" ; 
    int k = 0 ; 
    while (k < kumpood.length()) { // better if loop with round of `sizeof(string) / sizeof(string[0])`
        cout << kumpood[k] << " " ; // string can index
        k++ ; 
    }
    cout << kumpood << endl ; 
    cout << kumpood.length() << endl ; 

    // Note : scope of variables
    int a = 1 , b = 3 , c = 8 ; 
    if (a < b) {
        int c ; // this c can only be used in this block , cant use in another block
        int diff = b - a ; 
        c = 20 ; 
        cout << "in = " << c << " and diff = " << diff << endl ; // c in this block is 20 , not 8 outside
    }
}