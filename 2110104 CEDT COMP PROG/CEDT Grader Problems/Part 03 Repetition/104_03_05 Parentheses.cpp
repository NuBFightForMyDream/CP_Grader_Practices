# include <iostream>  // input-output
# include <string> // string
using namespace std ; // namespace

int main() {
    // define var.
    string old_sentence ; 
    // getline of sentence
    getline(cin , old_sentence) ; 

    // for loop , check string
    string new_sentence = "" ; 
    for (int i = 0 ; i < old_sentence.length() ; i++) {
        if (old_sentence[i] == '(') {
            new_sentence += '[' ;
        }

        else if (old_sentence[i] == '[') {
            new_sentence += '(' ;
        }

        else if (old_sentence[i] == ')') {
            new_sentence += ']' ;
        }

        else if (old_sentence[i] == ']') {
            new_sentence += ')' ;
        }

        // otherwise , add normal char
        else {
            new_sentence += old_sentence[i] ;
        }
    } // ending loop

    cout << new_sentence << endl ; 
}