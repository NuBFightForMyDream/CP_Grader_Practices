# include <iostream>
# include <string>
using namespace std ; 

// main fn
int main() {
    // declare & input var
    int number ;
    string divided_num = "" ;
    cin >> number ;// input number

    // floor number to 10's    
    int floored_num = (number / 10) * 10 ;
        // integer division -> gives int

    // while loop until number is 0;
    while (floored_num >= 0) {
        // added divided number then -10 each time
        divided_num += (to_string(floored_num) + " "); 
        floored_num -= 10 ;
    }

    // after loop -> strip last char using substr
    cout << divided_num.substr(0 , divided_num.length() - 1) << endl; 
}