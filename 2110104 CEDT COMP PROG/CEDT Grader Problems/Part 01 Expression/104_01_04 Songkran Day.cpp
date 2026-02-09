# include <iostream> // input/output
# include <cmath> // math
using namespace std ; 

int main() {
    int buddha_year ;
    cin >> buddha_year ; 

    // extract 2 rightmost year then store in y
    int y = (buddha_year - 543) % 100 ;

    // find value of ( y + floor(y / 4) + 11 ) / 7
        // in cpp , suing floor() for floor function
    int songkran_day = (y + (y / 4) + 11) % 7  ; // we need remainder of 7
        // in cpp , we have integer division , so we dont need floor() function
    
    // print out result
    cout << songkran_day ; 
}
