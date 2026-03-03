#include <iostream>
#include <string>
#include <map> // for key:value indexing
using namespace std ; 

int main() {
    // declare & input var
    int total_calories = 0 ; 
    int check_type ;

    // create map for food_type indexing
    map <int , int> food_type = {{1,100} , {2,120} , {3,200} , {4,60} , {5,404} } ;

    cin >> check_type ; 

    while (true) {
        // check if type 5
        if (check_type == 5) {
            break ;
        }

        else {
            total_calories += food_type[check_type] ; 
        }

        // still input 
        cin >> check_type ; 
    }
    
    // out of loop -> print output
    cout << "Bye Bye" << "\n" << "Total Calories: " << total_calories ; 
}