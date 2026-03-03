#include <iostream>
#include <string> 
using namespace std;

int main() {
    // logic of slicing string : 
    // 4 digit : x , xxx : 0 , [1:4]
    // 5 digit : xx , xxx : [0:2] , [2:5]
    // 6 digit : xxx , xxx : [0:3] , [3:6]

    // input & declare
    string number ; 
    cin >> number ; 

    // slicing string using substr then output
    cout << number.substr(0 , number.length() - 3) << ',' << number.substr( number.length() - 3 , number.length()) << endl ; 
}