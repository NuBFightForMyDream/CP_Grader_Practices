# include <iostream> 
# include <vector> 
using namespace std ; 

int main() { 
    int taxi_fee = 0 ; 
    int km_drive ; cin >> km_drive ; 

    if (km_drive <= 1) { 
        taxi_fee = 35 ; 
    } 
    else if ((km_drive >= 1) && (km_drive <= 10)) { 
        int diff_km = km_drive - 1 ; 
        taxi_fee = 35 + (diff_km * 5) ; // 5 thb per km 
    }
    else if ( km_drive > 10 ) { 
        int diff_km = km_drive - 10 ; 
        taxi_fee = 35 + (9 * 5) + (diff_km * 8) ; // 8 thb per km 
    }
    cout << taxi_fee << endl ; 
}