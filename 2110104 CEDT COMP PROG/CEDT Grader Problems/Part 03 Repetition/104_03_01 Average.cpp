# include <iostream> // i/o
# include <cmath> // math , round
using namespace std ; // namespace

int main() {
    // define var
    double number , average , total = 0.0 ; 
    int count_number ; 

    // input first number
    cin >> number ; 

    // check condition
    if (number == -1) {
        cout << "No Data" ;
    }
    
    else {
        while (number != -1) {
            // add count & add sum
            total += number ; 
            count_number += 1 ;

            // input number
            cin >> number ;
        }

        // after while loop , calculate avg
        average = total / count_number ;
        cout << round(average * 100) / 100 << endl ;
    }

}