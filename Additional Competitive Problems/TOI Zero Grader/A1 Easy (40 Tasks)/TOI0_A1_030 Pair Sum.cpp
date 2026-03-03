#include <iostream>
#include <string>
using namespace std ; 

int main() {
    // declare & input
    int pairs ;
    int num_1 , num_2 ;
    int total_value = 0 ; 

    // input pairs & create str for operation
    cin >> pairs ; 
    string operation = "" ;
    
    // for loop input
    for (int i = 0 ; i < pairs ; i += 1) {
        // input number for each loop
        cin >> num_1 >> num_2 ; 

        // check greater than number
        if (num_1 >= num_2) { 
            // add operation to str & add value
            operation += to_string(num_1) + " + " ; // add num_1 (cuz num_1 greater)
            total_value += num_1 ;
        }

        else if (num_1 <= num_2) {
            // add operation to str & add value
            operation += to_string(num_2) + " + " ; // add num_1 (cuz num_1 greater)
            total_value += num_2 ;
        }
    }

    // after end loop -> print value (trim + first)
    if (pairs == 1) {
        // print only total value
        cout << total_value << endl;
    }

    else { // more than 1 pairs
        // we dont need 2 last string '+ ' , so we'll slice string instead
        // using substr instead (slicing like python only gives index)
        cout << operation.substr(0 , operation.length() - 2) << "= " << total_value << endl; 
        // -2 bcz we dont need '+ ' , so we use "= " bcz there are no space
    
    }
}