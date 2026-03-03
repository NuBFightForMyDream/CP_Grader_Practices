#include <iostream>
#include <string>

// main fn
int main() {
    // declare & input var.
    int temp ; 
    char type ; 

    std::cin >> temp >> type ;

    // check type
    if ( (type == 'C') || (type == 'c') ) {
        // check state
        if (temp <= 0) {
            std::cout << "solid" << std::endl;
        }

        else if ( (temp > 0) && (temp < 100) ) {
            std::cout << "liquid" << std::endl;
        }

        else {
            std::cout << "gas" << std::endl;
        }
    }

    else if ((type == 'F') || (type == 'f')) {
        
        // check state
        if (temp <= 32) {
            std::cout << "solid" << std::endl;
        }
        
        else if ( (temp > 32) && (temp < 212) ) {
            std::cout << "liquid" << std::endl;
        }
        
        else {
            std::cout << "gas" << std::endl;
        }
        
    }
    
}