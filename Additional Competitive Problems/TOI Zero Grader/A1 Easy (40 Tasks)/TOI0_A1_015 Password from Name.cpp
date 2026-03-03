// 1 : import libraries
#include <iostream>
#include <string>

// 2 : main fn
int main() {
    // declare & input var.
    std::string name ; 
    std::string surname ; 
    std::string age ; // input with str type (for indexing)

    std::cin >> name ;
    std::cin >> surname ;
    std::cin >> age;

    // check condition
    if (name.length() > 5 and surname.length() > 5) {
        // create password with 2 first char from name 
        // last char from surname & last digit of age

        // cpp cant index -1 --> use .length() - 1 instead

        std::string password = "" ; // Note : can't concate 2 char in same time
        password += (name[0]) ;
        password += (name[1]) ; 
        password += (surname[ surname.length() - 1 ]) ;
        password += (age[ age.length() - 1 ]) ;

        std::cout << password << std::endl;
    }

    else {
        // create password with first char from name 
        // age & last char of surname

        std::string password = "" ;
        password += (name[0]) ;
        password += (age) ;
        password += (surname[ surname.length() - 1 ]) ;
        
        std::cout << password << std::endl;
    }
}
