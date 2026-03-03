# include <iostream>
# include <string> 
using namespace std ; 


// main fn 
int main() {
    
    // declare & input
    int loop , num;
    int min_num = 0 ; 
    cin >> loop ;

    // for loop : input each loop
    int i = 0 ; 
    while (i < loop) {
        // input info for each loop
        cin >> num ; 
        
        // check if lower than minimum
        if (num < min_num) {
            min_num = num ; // given min_num has value num
        }

        else if (i == 0) { // first value
            min_num = num ;
        }

        // increment a for next loop
        i += 1 ; 
    }

    // print out min_num after loop
    cout << min_num ; 
}
