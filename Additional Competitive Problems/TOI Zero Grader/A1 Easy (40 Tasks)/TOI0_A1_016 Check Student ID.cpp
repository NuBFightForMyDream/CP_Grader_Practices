// 1 : impor libraries
#include <iostream>
#include <string>

// 2 : main fn
int main() {
    std::string stu_id ; // declare var.
    std::cin >> stu_id ; // input stu_id

    // check condition
    // if digit 3 and digit 4 is 1 & 6 respectively -> yes
    if ( (stu_id[2] == '1') && (stu_id[3] == '6') ) {
        std::cout << "yes" << std::endl;
    }

    else {
        std::cout << "no" << std::endl; 
    }
}