# include <iostream> // i/o
# include <string> // string
#include <sstream>  // stringstream for word splitting
using namespace std ; 

int main() {
    // define string
    string check_word , sentence ;
    int count_word = 0 ; 

    cin >> check_word ;
    cin.ignore(); getline(cin, sentence);

    // convert check_word to lowercase
    for (char& c : check_word) {
        c = tolower(c);
    }

    // using stringstream & check cleaned word 
    stringstream ss(sentence);
    string word;
    while (ss >> word) {
        string cleaned = "";
        for (char c : word) {
            if (!ispunct(c)) {
                cleaned += tolower(c); // also convert each character to lowercase
            }
        }

        if (cleaned == check_word) {
            count_word++;
        }
    }

    cout << count_word; 
}
