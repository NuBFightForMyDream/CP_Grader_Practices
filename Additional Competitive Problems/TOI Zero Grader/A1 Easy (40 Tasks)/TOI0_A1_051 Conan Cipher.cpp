# include <iostream> 
# include <string> 
using namespace std ; 

int main() { 
    string message ; cin >> message ; 

    int pos_to_encrypt ; cin >> pos_to_encrypt ;
    pos_to_encrypt %= 26 ; // for encrypting

    // define alphabets string with double length to index and move in case 
    string alphabets = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

    // using find() method then move with k character 
    string decrypted_msg = "" ;
    for (char &each_character : message) {
        // define position for first found 
        size_t old_pos_found = alphabets.find(each_character) ; // use size_t for positive integer 
        size_t new_pos_found = old_pos_found + pos_to_encrypt ; 
        // add new string to decrypted_msg
        decrypted_msg += alphabets[new_pos_found];
    }

    cout << decrypted_msg << endl ; 
    
}