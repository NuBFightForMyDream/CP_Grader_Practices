# include <iostream>
# include <string>
using namespace std ; 

int main() {
    long long total_value = 0 ; // define long long type for storing total value 
    string numbers; // input number in string form 

    cin >> numbers; // read the first input

    while (numbers != "END") { // check while input != "END"
        total_value += stoll(numbers); // convert and add (string to long long)
        cin >> numbers; // read next input
    }

    // display total value 
    cout << total_value << endl ; 
}