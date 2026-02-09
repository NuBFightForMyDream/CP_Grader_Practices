# include <iostream>
# include <string>
using namespace std ; 

int main() {
    // create array : bool array for checking if that number exist
    // char digits[10] = {'0','1','2','3','4','5','6','7','8','9'} ; => NO NEED WEI
    bool exist[10] = {false,false,false,false,false,false,false,false,false,false} ;

    // define str_in
    string sentence_in ; 
    getline(cin , sentence_in) ; // get all string in line by ignoring spacebar

    // for loop , check if that numbers exist
    for (int i = 0 ; i < sentence_in.length() ; i++) {
        // check if char in 0-9
        if (sentence_in[i] >= '0' && sentence_in[i] <= '9') {
            // change at index in array (exist) to true
            exist[ ( sentence_in[i] - '0' ) ] = true ; // minus '0' to convert char to int 
        }
    }

    // check result
    string str_out = "" ; 
    for (int i = 0 ; i < 10 ; i++) {
        if (exist[i] == false) {
            str_out += to_string(i) + "," ;
        }
    }

    // print result (if null = None , else trim out last ,)
    if (str_out == "") {
        cout << "None" << endl ; 
    }

    else { // trim out ,
        cout << str_out.substr(0 , str_out.length() - 1) << endl ; 
    }
}