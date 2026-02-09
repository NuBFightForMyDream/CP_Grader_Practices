# include <iostream> 
# include <iomanip> // setprecision
# include <cmath> // math
using namespace std ; 

int main() {
    // logic : reverse engineering
    // reverse array then calculate each layer (x + 1/x)
    
    // Ex : 
        // layer 1 : 9 -> 7 -> 8 -> 1 
            // 7 + 1/9 -> 8 + (7 + 1/9) -> 1 + 1/(...)
        // layer 2 : 7 -> 8 -> 1 
            // 8 + (7 + 1/9) -> 1 + 1/(...)

    // define array
    int size ; cin >> size ; 
    int fraction[size] ; 
    for (int i = 0 ; i < size ; i++) {
        cin >> fraction[i] ; 
    }

    
}