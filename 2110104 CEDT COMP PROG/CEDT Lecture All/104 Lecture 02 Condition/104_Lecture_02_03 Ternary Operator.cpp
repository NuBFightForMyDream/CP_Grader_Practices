# include <iostream> // input-output
using namespace std ; // namespace

int main() {
    // Ex 1 : Ternary have cmd like this : cd. ? if yes : else no
    int p;
    cout << "Enter an integer: "; cin >> p;

    // old command
    /*
        if (p >= 0) abs = a; else abs = -p; 
        // given abs has value p if p >= 0
    */

    // using ternary cmd
    int abs = p >= 0 ? p : -p; 
        // if abs = p && p >= 0 -> if yes given abs = p , else given abs = -p
    cout << "The absolute value is " << abs << endl;

    // Ex 2 : Ternary operator exercises
    int a = 5;
    if (a++ == 6) { // a++ still a = 5 (post-increment)
        cout << "a" << endl; 
    }
    if (a++ == 6) cout << "b" << endl; // a = 6 before increment (added before) so it shows b
    else { cout << "d" << endl; }
    
    int b = 10; 

    if (a < 50 || b++ == 10) { // b is now 10 (post-increment) , a still < 50 
        // T or T = True
        cout << "The value of b: " << b << endl; // b = 10
    }
}