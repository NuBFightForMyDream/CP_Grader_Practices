#include <iostream>
#include <string>

int main() {
    // declare & input var.
    int num_1 , num_2 , num_3 ; 
    std::cin >> num_1 >> num_2 >> num_3 ;
    // cpp can input in same line & different line with one cmd

   // check number
   if ( (num_1 == num_2) && (num_2 == num_3) && (num_1 == num_3) ) {
        // same number -> all the same
        std::cout << "all the same" << std::endl;
   }

   else if ( (num_1 != num_2) && (num_2 != num_3) && (num_1 != num_3) ) {
        std::cout << "all different" << std::endl;
   }

   else {
        std::cout << "neither" << std::endl;
   }
}
