# include <iostream> 
# include <string> 
using namespace std ; 

int main() {

    // declare var
    string str , reverse_str = "" ; 
    cout << "Enter String : " ; cin >> str ; 

    // while loop , get reverse string
    int i = 0 ; 
    while (i < str.length()) {
        // add reverse string
        reverse_str += str[ (str.length() - 1) - i] ; // last pos is length - 1 
        i++ ; 
    }
    // return result
    cout << "Reversed String is : " << reverse_str << endl ;
    
    
    // another solution : while until length/2 , then swap string using swap(a,b) command
}