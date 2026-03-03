// 1 : import library
#include <iostream>
#include <string>

// 2 : main fn
int main() {
    // declare & input 
    int number;
    char operation ; // for + - x

    // input first then operation
    std::cin >> number;
    std::cin >> operation ;
    
    // do reverse operation
    std::string num_str = std::to_string(number) ;
    // Note : creating reverse_num_str by adding empty str + char + char (total = str) 
    // then we'll convert to integer later
    int reverse_num = std::stoi(std::string() + num_str[1] + num_str[0]); // change to integer

    // if statement
    if (operation == '+') {
        // do operation
        int total_number = number + reverse_num ;
        std::cout << number << " + "  << reverse_num << " = " << total_number << std::endl;
    }

    else if (operation == '*') {
        // do operation
        int total_number = number * reverse_num ;
        std::cout << number << " * "  << reverse_num << " = " << total_number << std::endl;
    }
    
    return 0; // for no errors

}

