// SOL 1 : using remove() method (HARD TO UNDERSTAND)

# include <iostream> // for competitive prog (include most of library)
# include <string>
using namespace std ; 

int main() {
    // declare array
    const int sizeArray = 10;
    char digits[sizeArray] = {'0','1','2','3','4','5','6','7','8','9'};
    int currentSize = sizeArray; // create currentSize bcz size arent constant

    // input info
    string sentence_in;
    getline(cin, sentence_in);


    for (char c : sentence_in) { // loop char c inside sentence_in string
        // Only try to remove if c is a digit
        if (c >= '0' && c <= '9') {
            // Use remove to shift c to the end, then decrease size
            char* new_end = remove(digits, digits + currentSize, c); // pointer to char type
            // new_end = pointer to end , remove until false with char c
            currentSize = new_end - digits;
        }
    }

    // Print remaining (missing) digits
    string sentence_out = "" ;
    for (int i = 0; i < currentSize; i++) {
        sentence_out += string(1, digits[i]) + ",";
    }

    // trim last comma out
    if (currentSize > 0) {
        cout << sentence_out.substr(0 , sentence_out.length() - 1) << endl ;  
    }
    else {
        cout << "None" << endl ; 
    }
}

