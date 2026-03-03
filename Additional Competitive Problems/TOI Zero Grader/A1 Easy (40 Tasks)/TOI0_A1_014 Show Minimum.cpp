// 1 : import libraries
#include <iostream>
#include <string>

// 2 : main fn
int main() {
    // declare & input var.
    int num_1 , num_2 , num_3 ;

    std::cin >> num_1 ;
    std::cin >> num_2 ;
    std::cin >> num_3 ;

    // check if number is min
    if ( (num_1 <= num_2) && (num_1 <= num_3) ) {
        // num_1 is min
        std::cout << num_1 << std::endl;
    }

    else if ( (num_2 <= num_1) && (num_2 <= num_3) ) {
        // num_2 is min
        std::cout << num_2 << std::endl;
    }

    else if ( (num_3 <= num_2) && (num_3 <= num_1) ) {
        // num_3 is min
        std::cout << num_3 << std::endl;
    }
}