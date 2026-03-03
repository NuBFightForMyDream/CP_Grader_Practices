#include <iostream>
#include <string>
using namespace std ; 

// main fn 
int main() {
    // declare & input var.
    int total_calories = 0 ;
    int food_type ; // for checking type of food

    // while loop until found 5 
    cin >> food_type ; // input first value

    while (food_type != 5) {
        // type 1 : apple 100 cal
        if (food_type == 1) {
            total_calories += 100 ; 
        } 

        // type 2 : papaya 120 cal
        else if (food_type == 2) {
            total_calories += 120 ;
        }

        // type 3 : banana 200 cal
        else if (food_type == 3) {
            total_calories += 200 ;
        }

        // type 4 : orange 60 cal
        else if (food_type == 4) {
            total_calories += 60 ; 
        }

        // type 5 : exit
        else {
            break;
        }

        // still input
        cin >> food_type ; 
    }

    // out of loop -> print result
    cout << "Bye Bye" << "\n" << "Total Calories: " << total_calories << endl ; 

    return 0 ; // for no errors
}