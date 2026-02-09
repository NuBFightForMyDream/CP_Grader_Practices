# include <iostream>
# include <string>
# include <cmath>
using namespace std ; 

int main() {
    // create array
    string monthName[13] = {"NULL","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"} ;

    // receive input
    string date_in ;
    cin >> date_in ; 
        // substr : pos 0 , pos 3 , pos 6
    int day , month , year_en ; 
    day = stoi( date_in.substr(0,2) ) ;
    month = stoi( date_in.substr(3,2) ) ;
    year_en = stoi( date_in.substr(6,4) ) - 543 ;

    // print output
    cout << monthName[month] << " " << to_string(day) << ", " << to_string(year_en) << endl ; 
}