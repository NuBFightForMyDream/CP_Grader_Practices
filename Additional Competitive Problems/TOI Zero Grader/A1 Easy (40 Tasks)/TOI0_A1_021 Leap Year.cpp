#include <iostream>
#include <string>

int main() {
    // declare & input var.
    int year;
    std::cin >> year ; 

    // check leap year
    // case 1 : if divided by 4 -> check 100 and 400
    // if divided by 4,100,400 -> leap year

    if (year % 4 == 0) {
        // check if divided by 100 & 400
        if ( (year % 100 == 0) && (year % 400 == 0) ) {
            std::cout << "yes" ;
        }

        else if ( (year % 100 == 0) && (year % 400 != 0) ) { // only divided by 100
            
            if (year <= 1500) {
                std::cout << "yes" ; // leap year before gregorian
            }
            
            else {
                std::cout << "no" ; // after gregorian -> not a leap year
            }
        }
        
        else {
            std::cout << "yes" ;
        }
    }

    else {
        std::cout << "no" ;
    }

    return 0;
}