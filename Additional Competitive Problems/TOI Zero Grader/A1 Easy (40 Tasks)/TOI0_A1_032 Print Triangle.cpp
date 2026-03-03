# include <iostream>
# include <string> 
using namespace std;

int main() {
    int n ; 
    cin >> n ; 

    // check condition for printing triangle
    // first line , print n *'s
    
    // cant use '*' directly , so we'll use for loop instead
    string first_line = "" ; 
    for (int i = 0 ; i < n ; i += 1) {
        // add each char
        first_line += '*' ; 
    }

    // second line , print n-2 (check if n-2 >= 1)
    string second_line = "" ;
    if (n-2 >= 1) {
        // do second line 
        for (int i = 0 ; i < n-2 ; i += 1) {
            second_line += '*' ;
        }

    }

    // third line , print n-4 (check if n-4 >= 1)
    string third_line = "" ; 
    if (n-4 >= 1) {
        // do third line
        for (int i = 0 ; i < n-4 ; i += 1) {
            third_line += '*' ;
        }

    }

    // after loop , print out string (check if >0 for each line)
    if (first_line.length() > 0) {
        cout << first_line << endl;
    }
    if (second_line.length() > 0) {
        cout << second_line << endl;
    }
    if (third_line.length() > 0) {
        cout << third_line << endl;
    }
}