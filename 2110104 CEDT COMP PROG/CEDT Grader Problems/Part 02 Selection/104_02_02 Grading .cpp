# include <iostream> // i/o
using namespace std ; 

int main() { // return int (status message : 0/1)
    // declare s & input
    double score ;
    cin >> score ; 

    // check condition
    if (score >= 80) {
        cout << 'A' << endl ; 
    }

    else if (score >= 70) {
        cout << 'B' << endl ; // print char
    }

    else if (score >= 60) {
        cout << 'C' << endl ; 
    }

    else if (score >= 50) {
        cout << 'D' << endl ;
    }

    else {
        cout << 'F' << endl ;
    }
}
