# include <iostream> // input-output
# include <string> // string
using namespace std ; // namespace

int main() {
    // define str_in
    string str_in ; 
    int dup_max ;
    
    cin >> str_in >> dup_max ; 

    // loop check
    string str_out = "" ; 
    int count_repeat = 1 ; 
    char alphabet = str_in[0] ;

    for (int i = 1 ; i < str_in.length() ; i++) {
        // check next char if same
        if (str_in[i] == alphabet) {
            count_repeat += 1 ; 
        }
        else { // different char
            // check if add to str
            if (count_repeat < dup_max) {
                // add str_out & reset value
                str_out += string(count_repeat , alphabet) ; 
            }

            count_repeat = 1 ; // do both over and not over
            alphabet = str_in[i] ; // do both over and not over
        }

    } // ending for loop

    // check last char
    if (count_repeat < dup_max) {
        // add str_out & reset value
        str_out += string(count_repeat , alphabet) ; 
    }

    // print out value
    cout << str_out << endl ; 
}