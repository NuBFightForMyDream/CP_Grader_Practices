# include <iostream>
# include <string>
# include <cmath>
using namespace std ; 

int main() {
    // example 1 : for loop sum to n
    int n , total = 0 ; cin >> n ; 
    for (int i = 0 ; i < n ; i++) {
        total += i ; 
    }
    cout << total << endl ; 

    // example 2 : prime number
    int number ; bool isPrimeNumber = true ; 
    cout << "Enter Number : " ; cin >> number ; 

    for (int div = 2 ; div < sqrt(number) ; div++) {
        if (n % div == 0) { // divided by some number , so it's not a prime number
            isPrimeNumber = false ;
            break ; 
        }
    }

    // check if isPrimeNumber
    if (isPrimeNumber == true) {
        cout << number << " is prime number" << endl ; 
    }
    else {
        cout << number << "is not a prime number" << endl ; 
    }
}