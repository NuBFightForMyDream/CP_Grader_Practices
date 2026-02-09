# include <iostream> // input-output
# include <cmath> // math
# include <string> // string
using namespace std ; 

// create leap year fn
bool isLeapYear(int year_th) {
    // change to year_en
    int year_en = year_th - 543 ; 

    // check condition
    if (year_en % 4 == 0) {
        // check if divided 4/100/400
        if (year_en % 100 == 0 && year_en % 400 == 0) {
            return true ; 
        }
        else if (year_en % 100 == 0 && year_en % 400 != 0) {
            return false ;
        }
        else { // divided only by 4 
            return true ;
        }
    }
    else {
        return false ; // not divided by 4/100/400
    }
}

int main() {
    // declare var
    int day , month , year_th ; 
    int day_passed = 0 ; 
    cin >> day >> month >> year_th ; 

    // check leap year

    // create array
    int daysInMonth_NotLeap[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31} ;
    int daysInMonth_Leap[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31} ;

    // for loop , add day
    for (int m = 0 ; m < month ; m++) {
        if (isLeapYear(year_th) == true) {
            day_passed += daysInMonth_Leap[m] ;
        }
        else {
            day_passed += daysInMonth_NotLeap[m] ; 
        }
    }

    day_passed += day ; // add day at current month
    // print out day
    cout << day_passed << endl ; 
    
}
