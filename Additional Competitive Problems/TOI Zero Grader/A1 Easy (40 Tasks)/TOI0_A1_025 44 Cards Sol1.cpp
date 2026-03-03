# include <iostream>
# include <string>
using namespace std; // for standard library shortcut

// main fn
int main() {
    // declare & input var.
    string cmd_card ;
    cin >> cmd_card ; // Ex : "AS" , "10D"
    
    // index string
    string value = cmd_card.substr(0 , cmd_card.length() - 1) ; // using substr with this cmd
    char suit = cmd_card[ cmd_card.length() - 1 ] ; // last char of string = char
    
    // check condition of cards (typos of suit)

    if ( (suit == 'c') || (suit == 'C') ) { // check value inside

        if ( (value == "A") || (value == "a") ) {
            cout << "ace" << " of " << "clubs" ;
        }

        else if ( (value == "J") || (value == "j") ) {
            cout << "jack" << " of " << "clubs" ;
        }

        else if ( (value == "Q") || (value == "q") ) {
            cout << "queen" << " of " << "clubs" ;
        }

        else if ( (value == "K") || (value == "k") ) {
            cout << "king" << " of " << "clubs" ;
        }

        else { // value is between 2 and 10
            cout << value << " of " << "clubs" ;
        }
    }

    else if ( (suit == 'S') || (suit == 's') ) {
                if ( (value == "A") || (value == "a") ) {
            cout << "ace" << " of " << "spades" ;
        }

        else if ( (value == "J") || (value == "j") ) {
            cout << "jack" << " of " << "spades" ;
        }

        else if ( (value == "Q") || (value == "q") ) {
            cout << "queen" << " of " << "spades" ;
        }

        else if ( (value == "K") || (value == "k") ) {
            cout << "king" << " of " << "spades" ;
        }

        else { // value is between 2 and 10
            cout << value << " of " << "spades" ;
        }
    }

    else if ( (suit == 'H') || (suit == 'h') ) {

        if ( (value == "A") || (value == "a") ) {
            cout << "ace" << " of " << "hearts" ;
        }

        else if ( (value == "J") || (value == "j") ) {
            cout << "jack" << " of " << "hearts" ;
        }

        else if ( (value == "Q") || (value == "q") ) {
            cout << "queen" << " of " << "hearts" ;
        }

        else if ( (value == "K") || (value == "k") ) {
            cout << "king" << " of " << "hearts" ;
        }

        else { // value is between 2 and 10
            cout << value << " of " << "hearts" ;
        }
    }

    else if ( (suit == 'd') || (suit == 'd') ) {

        if ( (value == "A") || (value == "a") ) {
            cout << "ace" << " of " << "diamonds" ;
        }

        else if ( (value == "J") || (value == "j") ) {
            cout << "jack" << " of " << "diamonds" ;
        }

        else if ( (value == "Q") || (value == "q") ) {
            cout << "queen" << " of " << "diamonds" ;
        }

        else if ( (value == "K") || (value == "k") ) {
            cout << "king" << " of " << "diamonds" ;
        }

        else { // value is between 2 and 10
            cout << value << " of " << "diamonds" ;
        }
    }
}