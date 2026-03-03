#include <iostream>
#include <string>
using namespace std ;

int main() {
    // declare & input
    string input_num ; 
    cin >> input_num ; 

    // for loop : add each string
    string reverse_num = "" ; 

    for (int i = 3 ; i > -1 ; i -= 1) { 
        reverse_num += input_num[i]; // add char to str -> change to str automatically
    }

    // print outpuyt after for loop
    cout << reverse_num << endl ; 
}