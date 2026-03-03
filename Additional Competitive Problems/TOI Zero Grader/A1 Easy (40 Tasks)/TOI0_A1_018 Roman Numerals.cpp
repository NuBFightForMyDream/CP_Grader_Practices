#include <iostream>
#include <string>

int main() {
    // declare & input
    int roman_num ;
    std::cin >> roman_num ;

    // check roman numerals
    if (roman_num == 1) {
        std::cout << "I" << std::endl;
    }

    else if (roman_num == 2) {
        std::cout << "II" << std::endl;        
    }

    else if (roman_num == 3) {
        std::cout << "III" << std::endl;        
    }

    else if (roman_num == 4) {
        std::cout << "IV" << std::endl;
    }

    else if (roman_num == 5) {
        std::cout << "V" << std::endl;        
    }

    else if (roman_num == 6) {
        std::cout << "VI" << std::endl;        
    }

    else if (roman_num == 7) {
        std::cout << "VII" << std::endl;
    }

    else if (roman_num == 8) {
        std::cout << "VIII" << std::endl;        
    }

    else if (roman_num == 9) {
        std::cout << "IX" << std::endl;        
    }

    // error case
    else if (roman_num < 0){
        std::cout << "Error : Please input positive number" << std::endl;
    }

    else if ( (roman_num == 0) || (roman_num > 9) ) {
        std::cout << "Error : Out of range" << std::endl;
    }

    return 0 ; 
}