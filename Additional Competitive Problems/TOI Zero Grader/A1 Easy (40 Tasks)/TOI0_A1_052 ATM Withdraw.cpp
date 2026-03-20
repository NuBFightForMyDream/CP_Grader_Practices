# include <iostream> 
# include <cmath>
using namespace std ; 

int main() {
    // input money and check if money can be withdrawn 
    int money ; cin >> money ;

    if (money % 100 != 0 || money <= 0) cout << "ERROR" ;
    else {
        // define banknote for withdrawal
        int money_1000 = 0 , money_500 = 0 , money_100 = 0 ;
        
        if (money / 1000 > 0) {
            money_1000 = money / 1000 ; 
            money = money % 1000 ; 
            cout << "1000 = " << money_1000 << endl ;
        }
        
        if (money / 500 > 0) {
            money_500 = money / 500 ; 
            money = money % 500 ; 
            cout << "500 = " << money_500 << endl ; 
        }
        
        if (money / 100 > 0) {
            money_100 = money / 100 ; 
            money = money % 100 ; 
            cout << "100 = " << money_100 << endl ; 
        }
    }
}