# include <iostream>
# include <cmath>
# include <string>

# include <tuple> // for returning 2 functions 
using namespace std ; 

// 3 functions 
int to_second(int hour , int minute , int second) {
    return 3600 * hour + 60 * minute + second ; 
}

string format_hour(int hour , int minute , int second) {
    return to_string(hour) + ":" + to_string(minute) + ":" + to_string(second) ; 
}

// functions that return more than 1 value (have to use tuple to pack)
tuple<int , int , int> to_hms(int totalSecond) {
    int hour = totalSecond / 3600 ; // integer division
    totalSecond -= (hour * 3600) ; 
    int minute = totalSecond / 60 ; 
    totalSecond -= (minute * 60) ; 
    int second = totalSecond ; 
    // make tuple then return 
    return make_tuple(hour, minute, second) ;
}
int main() {
    // call functions (which call function)
    cout << format_hour(12 , 53 , 32) << endl ;
    cout << to_second(11 , 32 , 24) << endl ; 

    auto [h,m,s] = to_hms(13800) ; // auto type then return to [h,m,s] (unpack)
    cout << h << " " << m << " " << s << endl ; 
}