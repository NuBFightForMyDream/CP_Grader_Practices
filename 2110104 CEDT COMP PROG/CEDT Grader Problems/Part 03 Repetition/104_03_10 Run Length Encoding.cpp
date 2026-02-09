# include <iostream> // inputoutput
# include <string> // string
using namespace std ; 

int main() {
    string str_in , RLE = "" ;
    cin >> str_in ; 

    // given first char & for loop
    char check = str_in[0] ;
    int count_repeat = 0 ; 

    for (int i = 0 ; i < str_in.length() ; i++) {
        if (check == str_in[i]) { // add count & still same char
           count_repeat += 1 ;  
        }

        else { // add old result & change char & reset count to 1
            RLE += check ; 
            RLE += " " + to_string(count_repeat) + " " ;
            check = str_in[i] ;
            count_repeat = 1 ;
        }
    }
    // add last info
    RLE += check ; 
    RLE += " " + to_string(count_repeat) + " " ;
    
    cout << RLE ; 
}
