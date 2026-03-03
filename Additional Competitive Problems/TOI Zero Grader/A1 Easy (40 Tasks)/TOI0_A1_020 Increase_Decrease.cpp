#include <iostream>
#include <string>

// main fn
int main() {
    // declare & input
    int num_1 , num_2 , num_3 ; 
    std::cin >> num_1 >> num_2 >> num_3 ;

    // check increasing / decreasing

    // Note : a1 < a2 < a3 -> T(1) / F(0) < a3 -> too dangerous
    if ((num_1 < num_2) && (num_2 < num_3) ) {
        std::cout << "increasing" << std::endl; 
    }

    else if ((num_1 > num_2) && (num_2 > num_3) ) {
        std::cout << "decreasing" << std::endl;
    }

    else {
        std::cout << "neither" << std::endl;
    }

}