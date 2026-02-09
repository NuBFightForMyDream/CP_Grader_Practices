# include <iostream> // input-output
# include <string> // string
using namespace std ; // namespace

int main() {
    // Ex 1 : find if char in string (input both)
    string s,s2; char c;
    cout << "Enter a string: "; cin >> s;
    cout << "Enter a char: "; cin >> s2;
    c = s2[0]; // c will be seen as index

    // define var.
    int i = 0, pos;
    bool found = false;
    while (i < s.length()) {
        if (s[i] == c) {
            found = true; 
            pos = i; // found at pos i
            break ;
        }
        
        // update status if checked
        cout << "Checked at " << i << endl;
        i++; // add index each time  
    }
    // check if found or not
    if (found) {
        cout << "Found " << c << " at position " << pos << endl;
    } else {
        cout << "Not found" << endl;
    }
