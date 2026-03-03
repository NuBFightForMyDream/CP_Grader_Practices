// 1 : import libraries
#include <iostream>
#include <string>

// 2 : main fn
int main(){
    // declare var & input
    char alphabet ;
    int number ;

    std::cin >> alphabet ;
    std::cin >> number;

    // check password
    if (alphabet == 'H') {
        // check number
        if (number == 4567) {
            std::cout << "safe unlocked" << std::endl;
        }

        else if (number != 4567) {
            std::cout << "safe locked - change digit" << std::endl;
        }
    }

    else if (alphabet != 'H') {
        if (number == 4567) {
            std::cout << "safe locked - change char" << std::endl ;
        }

        else if (number != 4567) {
            std::cout << "safe locked" << std::endl;
        }
    }
}