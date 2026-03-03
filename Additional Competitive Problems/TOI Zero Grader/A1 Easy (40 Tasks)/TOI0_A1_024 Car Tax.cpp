#include <iostream>
#include <string>

int main() {
    // declare & input var.
    int year , size ;
    std::cin >> year >> size ;

    // check year first
    if (year <= 1990) {
        // check size
        if (size <= 1500) {
            int tax = 1250;
            std::cout << tax << std::endl;
        }
        else if ( (size > 1500) && (size < 2000)) {
            int tax = 1400;
            std::cout << tax << std::endl;
        }
        else if (size > 2000) {
            int tax = 2000;
            std::cout << tax << std::endl;
        }
    }

    else if ( (1991 <= year) && (year <= 1999)) {
        // check size
        if (size <= 1500) {
            int tax = 1100;
            std::cout << tax << std::endl;
        }
        else if ( (size > 1500) && (size < 2000)) {
            int tax = 1300;
            std::cout << tax << std::endl;
        }
        else if (size > 2000) {
            int tax = 1700;
            std::cout << tax << std::endl;
        }
    }

    else if (year >= 2000) {
        // check size
        if (size <= 1500) {
            int tax = 1000;
            std::cout << tax << std::endl;
        }
        else if ( (size > 1500) && (size < 2000)) {
            int tax = 1200;
            std::cout << tax << std::endl;
        }
        else if (size > 2000) {
            int tax = 1500;
            std::cout << tax << std::endl;
        }
    }
}