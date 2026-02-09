# include <iostream> // i/o
# include <string> // string
using namespace std ; // namespace

int main() { // returning int status code
    // declare & input
    int number ; 
    cin >> number ; 

    // check condition
    if (number > 0) {
        if (number % 2 == 0) {
            cout << "positive" << endl << "even" << endl ;
        }
        else {
            cout << "positive" << endl << "odd" << endl ;
        }
    }

    else if (number < 0) {
        if (number % 2 == 0) {
            cout << "negative" << endl << "even" << endl ;
        }
        else {
            cout << "negative" << endl << "odd" << endl ;
        }
    }

    else {
        cout << "zero" << endl << "even" << endl ;
    }
}
