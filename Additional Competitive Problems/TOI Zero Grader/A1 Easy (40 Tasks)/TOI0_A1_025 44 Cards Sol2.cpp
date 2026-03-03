# include <iostream>
# include <string>
# include <map> // similar as dict in Python
using namespace std; // for standard library shortcut

// main fn
int main() {
    // declare & input var.
    string cmd_card ;
    cin >> cmd_card ; // Ex : "AS" , "10D"
    
    // index string
    string value = cmd_card.substr(0 , cmd_card.length() - 1) ; // using substr with this cmd
    char suit = cmd_card[ cmd_card.length() - 1 ] ; // last char of string = char
    
    // create map of value and suit <key = string , value = string
    map <string , string> value_map = { {"2","2"},{"3","3"},{"4","4"},{"5","5"},
                                        {"6","6"},{"7","7"},{"8","8"},{"9","9"},{"10","10"},
                                        {"A","ace"},{"J","jack"},{"Q","queen"},{"K","king"},
                                        {"a","ace"},{"j","jack"},{"q","queen"},{"k","king"} } ;

    map <char , string> suit_map = { {'S',"spades"} , {'D',"diamonds"} , {'H',"hearts"} , {'C',"clubs"} ,
                                     {'s',"spades"} , {'d',"diamonds"} , {'h',"hearts"} , {'c',"clubs"} } ;

    // print out result by accessing key:value inside map
    cout << value_map[value] << " of " << suit_map[suit] << endl ;

}

    