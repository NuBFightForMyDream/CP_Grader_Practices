#include <iostream>
#include <string>

// main fn
int main() {
    // declare & input var.
    int y1 , m1 , d1 ; 
    int y2 , m2 , d2 ; 

    std::cin >> y1 ; 
    std::cin >> m1 ;
    std::cin >> d1 ; 

    std::cin >> y2 ; 
    std::cin >> m2 ; 
    std::cin >> d2 ; 

    // check birthday
    if (y2 > y1) { // p1 before p2 (y1 < y2) -> p1 
        std::cout << '1' << std::endl;
    }

    else if (y1 == y2) { // same year -> check age

        // check age
        if (m2 > m1) { // p1 before p2 -> p1 
            std::cout << '1' << std::endl;
        }

        else if (m2 == m1) { // same month -> check day
            // check date
            if (d2 > d1) { // p1 before p2 -> p1
                std::cout << '1' << std::endl;
            }

            else if (d2 == d1) {
                std::cout << '0' << std::endl;
            }

            else { // p2 before p1 -> p2
                std::cout << '2' << std::endl;
            }
        }
        
        else {
            std::cout << '2' << std::endl; // p2 before p1 -> p2
        }
    }

    else { // p2 before p1 -> (y1 > y2) -> p2
        std::cout << '2' << std::endl;
    }

    return 0 ; // for no errors
}