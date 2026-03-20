# include <iostream> 
# include <vector> 
# include <cmath>
using namespace std ; 

bool isPalindromeNumber(int number) {
    // define original and reverse number
    int original_num = number ; 
    int reverse_num = 0 ; // will add number then check if reversible

    while (number > 0) { 
        int last_digit = number % 10 ; 
        reverse_num = reverse_num * 10 + last_digit ; // add value from last digit
        number = number / 10 ; 
    }
    // check if nmber is same 
    return original_num == reverse_num ; 
}

int calculate_floor_number(int number) { 
    if (number / 10000 % 10 > 5) return 9 ; 
    else if (number / 1000 % 10 > 5) return 10 ; 
    else if (number / 100 % 10 > 5) return 11 ; 
    else if (number / 10 % 10 > 5) return 12 ; 
    else if (number / 1 > 5) return 14 ; 
    else return 13 ; 
}

int calculate_first_digit_room_number(int number) { 
    // check if palindrome
    if (isPalindromeNumber(number) == true) { 
        if ((number % 10000) + (number % 1) > 5) { 
            return 1 ; 
        }
        if ((number % 1000) * (number % 10) > 5) {
            return 2 ; 
        }
        else return 0 ;
    }
    else { 
        if ((number % 10000) / (number % 1) > 5) { 
            return 1 ; 
        }
        if ((number % 1000) - (number % 1) > 5) {
            return 2 ; 
        }
        else return 0 ;
    }
}

int calculate_second_digit_room_number(int number) { 
    if ((number % 10000) + (number % 1000) + (number % 100) + (number % 10) + (number % 1) > 25) { 
        return 1 ; 
    }
    if ((number % 10000) * (number % 1000) * (number % 100) * (number % 10) * (number % 1) > 55) { 
        return 2 ; 
    }
    else return 0 ; 
}

int main() { 
    // input value 
    int num ; cin >> num ;  

    // call functions
    int floor_number = calculate_floor_number(num);
    int first_digit = calculate_first_digit_room_number(num) ; 
    int second_digit = calculate_second_digit_room_number(num) ; 

    // show result
    cout << floor_number << first_digit << second_digit << endl ;
}

