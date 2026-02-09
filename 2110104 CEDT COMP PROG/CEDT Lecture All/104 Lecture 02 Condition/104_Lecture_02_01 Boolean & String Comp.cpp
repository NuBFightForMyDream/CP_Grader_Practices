# include <iostream> // input-output
# include <string> // string
using namespace std ; 

int main() {
    // Ex 1 : if structure
    int price ;
    cout << "Enter a total value of your item: "; cin >> price ;
    if ( price >= 200 ) {
        cout << "You receive a discount of 10%" << endl;
        price *= 0.9;
    }
    cout << "The price is " << price << endl;
    
    // Ex 2 : boolean (will return 0/1 in console)
    bool a,b,c;
    a = (1 == 2); // false (0)
    b = 'a' != 'b'; // true (1)
    c = '1' < 'a'; // true (1) (char use ASCII number for comparison)
    cout << "---------- Example 2 -------------" << endl ; 
    cout << a << " " << b << " " << c << endl ; // 0 1 1

    cout << (a || b) << endl; // F or T = T (1)
    cout << (a && b) << endl; // F and T = F (0)
    cout << (!a && b) << endl; // not(F) and T => T and T => T (1)

    // NOTE : priority of operators
    // increment -> PEMDAS -> Bitwise Shift -> COMPARISON -> LOGICAL -> ASSIGNMENTS
    
    // Ex 3 : string literal
        // start checking from left to right , using ascii (char compare)
    cout << "---------- Example 3 -------------" << endl ; 
    cout << ("a" == "a") << endl; // true (1)
    cout << ("a" < "a") << endl; // false (0)
    cout << ("a" < "aa") << endl; // true (1) -> ' ' < 'a' = true (end first)
    cout << ("aa" < "aaa") << endl; // true (1) -> ' ' < 'a' = true (end first)
    cout << ("ab" < "aaa") << endl; // false (0) -> 'b' < 'a' is false !!
    cout << ("ab" < "a") << endl; // false (0) -> 'a' < 'a' is false !!
    cout << ("ab" < "ac") << endl; // true (1) -> 'b' < 'c' 

    // NOTE : if still true , will check next char until false (if end will return true)

    if (1 == true) { // So , true has same value as 1 (storing 1 byte)
        cout << "Gei" ;
    }
}