# include <iostream> // input-output
# include <string> // string
using namespace std ; 

int main() {
    // NOTE : char stores integer (from 0 to 255) (but if over , will repeat looping until stores)

    // Ex 1 : transforming char (number) to int
    char cha ; 
    cout << "Enter Character Numebr : " ; 
    cin >> cha ;
    int value_of_char = cha - '0' ; 
    cout << value_of_char << endl; // '9' = 9

    // Ex 2 : string indexing
    string s = "Somchai";
    cout << "The string is " << s << endl;
    s[2] = '3'; // m -> 3
    cout << "Now s is " << s << endl;
    s[3]++; // c -> d
    cout << "Now s is " << s << endl;
    s[4] = 90; // 90 -> Z
    cout << "Now s is " << s << endl;
    int x = s[0]; // S = 83
    cout << x << endl;

    // Ex 3 : substr() and stoi()
    string s2 = "Somchai";
        // .substr(start_index , nb. of pos_want)
    cout << s2.substr(3,2) << endl ; // "ch"

    string numbah = "13432" ; 
    int convert = stoi(numbah); // convert = 13432
    cout << "STOI^2 : " << convert * convert << endl ; 
    
    // stoi() can convert other base-number to decimal nb.
    string binary_number = "1010100101" ; // base-2
    int convert_to_decimal = stoi(binary_number , 0 , 2) ; 
        // start considering at index 0 , calculate from base 2 !!!
    cout << "Binary -> Decimal : " << convert_to_decimal << endl ; 

    // NOTE for string literal
        // "123".length() -> "123" IS NOT STRING , ITS STRING LITERAL
        // btw , it's ot string object. so we cant call fn like string.cmd...
    
}