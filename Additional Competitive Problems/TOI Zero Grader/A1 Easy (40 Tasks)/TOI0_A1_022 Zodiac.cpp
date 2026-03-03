#include <iostream>

// main fn
int main() {
    // declare & input var
    int date , month ;
    std::cin >> date >> month ;

    // check zodiac
    if (month == 1) {
        if ( (1 <= date) && (date <= 19) ) {
            std::cout << "capricorn" ;
        }
        else {
            std::cout << "aquarius" ;
        }
    }

    else if (month == 2) {
        if ( (1 <= date) && (date <= 18) ) {
            std::cout << "aquarius" ;
        }
        else {
            std::cout << "pisces" ;
        }
    }

    else if (month == 3) {
        if ( (1 <= date) && (date <= 20) ) {
            std::cout << "pisces" ;
        }
        else {
            std::cout << "aries" ;
        }
    }

    else if (month == 4) {
        if ( (1 <= date) && (date <= 19) ) {
            std::cout << "aries" ;
        }
        else {
            std::cout << "taurus" ;
        }
    }

    else if (month == 5) {
        if ( (1 <= date) && (date <= 20) ) {
            std::cout << "taurus" ;
        }
        else {
            std::cout << "gemini" ;
        }
    }

    else if (month == 6) {
        if ( (1 <= date) && (date <= 21) ) {
            std::cout << "gemini" ;
        }
        else {
            std::cout << "cancer" ;
        }
    }

    else if (month == 7) {
        if ( (1 <= date) && (date <= 22) ) {
            std::cout << "cancer" ;
        }
        else {
            std::cout << "leo" ;
        }
    }

    else if (month == 8) {
        if ( (1 <= date) && (date <= 22) ) {
            std::cout << "leo" ;
        }
        else {
            std::cout << "virgo" ;
        }
    }

    else if (month == 9) {
        if ( (1 <= date) && (date <= 22) ) {
            std::cout << "virgo" ;
        }
        else {
            std::cout << "libra" ;
        }
    }

    else if (month == 10) {
        if ( (1 <= date) && (date <= 23) ) {
            std::cout << "libra" ;
        }
        else {
            std::cout << "scorpio" ;
        }
    }

    else if (month == 11) {
        if ( (1 <= date) && (date <= 21) ) {
            std::cout << "scorpio" ;
        }
        else {
            std::cout << "sagittarius" ;
        }
    }

    else if (month == 12) {
        if ( (1 <= date) && (date <= 21) ) {
            std::cout << "sagittarius" ;
        }
        else {
            std::cout << "capricorn" ;
        }
    }
}
